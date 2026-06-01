void __fastcall sub_48BA0(void (****a1)(void))
{
  void (***v1)(void); // rdx
  void (***v3)(void); // rdi
  void (*v4)(void); // rdx

  v1 = *a1;
  if ( *a1 )
  {
    if ( (*((_DWORD *)v1 + 2))-- == 1 )
    {
      v3 = *a1;
      v4 = **v3;
      if ( (char *)v4 == (char *)sub_241E0 )
      {
        if ( v3 )
          (*v3)[20]();
      }
      else
      {
        v4();
      }
    }
  }
}
