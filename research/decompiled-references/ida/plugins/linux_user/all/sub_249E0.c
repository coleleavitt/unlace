__int64 __fastcall sub_249E0(__int64 a1, int a2, int a3, int a4, int a5, int a6, char *s, int a8)
{
  int v8; // ebx
  char v9; // al
  __int64 v11[5]; // [rsp+0h] [rbp-28h] BYREF

  v11[1] = __readfsqword(0x28u);
  v8 = sub_31770(a1, a2, a3, a4, a5, a6, s, a8, (__int64)v11);
  if ( v8 > 0 )
  {
    if ( v11[0] )
    {
      sub_23EE0(a1, v11[0]);
      if ( !v9 )
      {
        v8 = -2;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, 0);
      }
    }
  }
  return (unsigned int)v8;
}

