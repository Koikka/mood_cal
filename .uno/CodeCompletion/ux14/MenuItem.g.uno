[Uno.Compiler.UxGenerated]
public partial class MenuItem: Fuse.Controls.Panel
{
    static MenuItem()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MenuItem()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.Rectangle();
        this.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp.Color = float4(1f, 1f, 1f, 0.1333333f);
        temp.Height = new Uno.UX.Size(2f, Uno.UX.Unit.Unspecified);
        temp.Alignment = Fuse.Elements.Alignment.Bottom;
        this.Children.Add(temp);
    }
}
