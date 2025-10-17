%% Inport block use Green
function UpdateBlockColor
    temp = find_system(bdroot,'BlockType','Inport');
    for i = 1 : length(temp)
    set_param(temp{i},'BackgroundColor','Green')
    end
    %% Outport block use Red
    temp = find_system(bdroot,'BlockType','Outport');
    for i = 1 : length(temp)
    set_param(temp{i},'BackgroundColor','Red')
    end
    clear temp;

    %% Constant block use Orange
    temp = find_system(bdroot,'FindAll','On','BlockType','Constant');
    for i = 1 : length(temp)
        pname = get_param(temp(i),'value');
        set_param(temp(i),'BackgroundColor','Orange');
    end
    clear temp;
    %% Gain block use Cyan
    temp = find_system(bdroot,'FindAll','On','BlockType','Gain');

    for i = 1 : length(temp)
        set_param(temp(i),'BackgroundColor','Cyan');
    end
   %% Goto block use Cyan
    temp = find_system(bdroot,'FindAll','On','BlockType','Goto');
    for i = 1 : length(temp)
        set_param(temp(i),'BackgroundColor','LightBlue');
    end
    %% From block use Cyan
    temp = find_system(bdroot,'FindAll','On','BlockType','From');
    for i = 1 : length(temp)
        set_param(temp(i),'BackgroundColor','LightBlue');
    end
end