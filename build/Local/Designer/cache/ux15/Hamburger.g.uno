[Uno.Compiler.UxGenerated]
public partial class Hamburger: Fuse.Controls.Rectangle
{
    bool _field_IsOpen;
    [global::Uno.UX.UXOriginSetter("SetIsOpen")]
    public bool IsOpen
    {
        get { return _field_IsOpen; }
        set { SetIsOpen(value, null); }
    }
    public void SetIsOpen(bool value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_IsOpen)
        {
            _field_IsOpen = value;
            OnPropertyChanged("IsOpen", origin);
        }
    }
    global::Uno.UX.Property<bool> temp_Value_inst;
    internal global::Fuse.Controls.Rectangle top;
    internal global::Fuse.Controls.Rectangle mid;
    internal global::Fuse.Controls.Rectangle bot;
    static Hamburger()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Hamburger()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Triggers.WhileTrue();
        temp_Value_inst = new mood_calendar_FuseTriggersWhileBool_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Property(temp1, mood_calendar_accessor_Hamburger_IsOpen.Singleton);
        var temp3 = new global::Fuse.Animations.Move();
        var temp4 = new global::Fuse.Animations.Move();
        var temp5 = new global::Fuse.Animations.Rotate();
        var temp6 = new global::Fuse.Animations.Rotate();
        var temp7 = new global::Fuse.Animations.Scale();
        var temp8 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Read);
        var temp9 = new global::Fuse.Controls.StackPanel();
        top = new global::Fuse.Controls.Rectangle();
        mid = new global::Fuse.Controls.Rectangle();
        bot = new global::Fuse.Controls.Rectangle();
        this.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        this.Width = new Uno.UX.Size(56f, Uno.UX.Unit.Unspecified);
        this.Height = new Uno.UX.Size(56f, Uno.UX.Unit.Unspecified);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Hamburger.ux";
        temp.SourceLineNumber = 4;
        temp.SourceFileName = "Hamburger.ux";
        temp.Animators.Add(temp3);
        temp.Animators.Add(temp4);
        temp.Animators.Add(temp5);
        temp.Animators.Add(temp6);
        temp.Animators.Add(temp7);
        temp.Bindings.Add(temp8);
        temp3.Y = 6f;
        temp3.Duration = 0.6;
        temp3.DelayBack = 0;
        temp3.Delay = 0.1;
        temp3.Target = top;
        temp3.Easing = Fuse.Animations.Easing.CubicInOut;
        temp4.Y = -6f;
        temp4.Duration = 0.6;
        temp4.DelayBack = 0;
        temp4.Delay = 0.1;
        temp4.Target = bot;
        temp4.Easing = Fuse.Animations.Easing.CubicInOut;
        temp5.Degrees = 135f;
        temp5.Duration = 0.6;
        temp5.DelayBack = 0;
        temp5.Delay = 0.1;
        temp5.Target = top;
        temp5.Easing = Fuse.Animations.Easing.CubicInOut;
        temp6.Degrees = 45f;
        temp6.Duration = 0.6;
        temp6.DelayBack = 0;
        temp6.Delay = 0.1;
        temp6.Target = bot;
        temp6.Easing = Fuse.Animations.Easing.CubicInOut;
        temp7.X = 0f;
        temp7.Duration = 0.5;
        temp7.Target = mid;
        temp7.Easing = Fuse.Animations.Easing.QuarticInOut;
        temp2.SourceLineNumber = 4;
        temp2.SourceFileName = "Hamburger.ux";
        temp1.SourceLineNumber = 4;
        temp1.SourceFileName = "Hamburger.ux";
        temp9.ItemSpacing = 4f;
        temp9.Width = new Uno.UX.Size(25f, Uno.UX.Unit.Unspecified);
        temp9.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp9.SourceLineNumber = 14;
        temp9.SourceFileName = "Hamburger.ux";
        temp9.Children.Add(top);
        temp9.Children.Add(mid);
        temp9.Children.Add(bot);
        top.CornerRadius = float4(1f, 1f, 1f, 1f);
        top.Color = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        top.Height = new Uno.UX.Size(2f, Uno.UX.Unit.Unspecified);
        top.Name = __selector1;
        top.SourceLineNumber = 15;
        top.SourceFileName = "Hamburger.ux";
        mid.CornerRadius = float4(1f, 1f, 1f, 1f);
        mid.Color = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        mid.Height = new Uno.UX.Size(2f, Uno.UX.Unit.Unspecified);
        mid.Name = __selector2;
        mid.SourceLineNumber = 16;
        mid.SourceFileName = "Hamburger.ux";
        bot.CornerRadius = float4(1f, 1f, 1f, 1f);
        bot.Color = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        bot.Height = new Uno.UX.Size(2f, Uno.UX.Unit.Unspecified);
        bot.Name = __selector3;
        bot.SourceLineNumber = 17;
        bot.SourceFileName = "Hamburger.ux";
        this.Children.Add(temp);
        this.Children.Add(temp9);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "top";
    static global::Uno.UX.Selector __selector2 = "mid";
    static global::Uno.UX.Selector __selector3 = "bot";
}
