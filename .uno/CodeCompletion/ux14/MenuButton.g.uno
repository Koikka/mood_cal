[Uno.Compiler.UxGenerated]
public partial class MenuButton: MenuItem
{
    string _field_Text;
    [global::Uno.UX.UXOriginSetter("SetText")]
    public string Text
    {
        get { return _field_Text; }
        set { SetText(value, null); }
    }
    public void SetText(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Text)
        {
            _field_Text = value;
            OnPropertyChanged("Text", origin);
        }
    }
    global::Uno.UX.Property<string> label_Value_inst;
    internal global::Fuse.Controls.Text label;
    static MenuButton()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MenuButton()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Reactive.Constant(this);
        label = new global::Fuse.Controls.Text();
        label_Value_inst = new mood_calendar_FuseControlsTextControl_Value_Property(label, __selector0);
        var temp1 = new global::Fuse.Reactive.Property(temp, mood_calendar_accessor_MenuButton_Text.Singleton);
        var temp2 = new global::Fuse.Reactive.DataBinding(label_Value_inst, temp1, Fuse.Reactive.BindingMode.Read);
        var temp3 = new global::Fuse.Gestures.WhilePressed();
        var temp4 = new global::Fuse.Animations.Scale();
        this.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        this.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        label.FontSize = 28f;
        label.Color = float4(0.9254902f, 0.9372549f, 0.945098f, 1f);
        label.Alignment = Fuse.Elements.Alignment.Top;
        label.Name = __selector1;
        label.Bindings.Add(temp2);
        temp3.Animators.Add(temp4);
        temp4.Factor = 0.85f;
        temp4.Duration = 0.1;
        temp4.Target = label;
        this.Children.Add(label);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "label";
}
