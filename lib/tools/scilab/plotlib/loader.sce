mode(-1)
set('figure_style','old')
path=get_absolute_file_path('loader.sce')
[unit,err]=file('open',path+'macros/lib','old');
if err
   exec('builder.sce',-1)
end
load(path+'macros/lib')
Title='Matlab-like graphic library'
if find(%helps(:,2)==Title)==[] then
  %helps=[%helps;path+'man',Title]
end
PLOTLIB=path+'macros/';
disp('loading plotlib version 0.19')
clear path Title

