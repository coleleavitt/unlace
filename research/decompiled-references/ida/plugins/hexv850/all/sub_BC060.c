unsigned __int64 __fastcall sub_BC060(int a1, int a2, __int64 a3, int a4)
{
  int v5; // r9d
  const char *v6; // r8
  _BYTE *v8; // [rsp+0h] [rbp-70h]
  __int64 v9; // [rsp+8h] [rbp-68h]
  _BYTE *v10; // [rsp+20h] [rbp-50h]
  unsigned __int64 v11; // [rsp+38h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  v8 = nullptr;
  v10 = nullptr;
  v9 = 0;
  if ( !(unsigned __int8)print_tinfo() )
  {
    v10 = (_BYTE *)qvector_reserve();
    *v10 = 63;
    v10[1] = 0;
  }
  if ( !(unsigned __int8)print_tinfo() )
  {
    v8 = (_BYTE *)qvector_reserve();
    v9 = 2;
    *v8 = 63;
    v8[1] = 0;
  }
  v6 = s1;
  if ( v9 )
    LODWORD(v6) = (_DWORD)v8;
  sub_32B650(a1, a2, 32, a4, (_DWORD)v6, v5);
  if ( v10 )
    qfree();
  if ( v8 )
    qfree();
  return v11 - __readfsqword(0x28u);
}

