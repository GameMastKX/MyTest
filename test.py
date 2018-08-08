import Build_uArm
uArm_Base=Build_uArm.BuildDefaultuArm()
from Visualization import ShowState
ShowState(uArm_Base,Target=None,ShowAxes=Ture,xLim=[-500,500],yLim=[-500,500],Height=500)