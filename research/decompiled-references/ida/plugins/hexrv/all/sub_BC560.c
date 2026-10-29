unsigned __int64 __fastcall sub_BC560(int a1, int a2, __int64 a3, int a4)
{
  const char *v5; // r8
  const char *v6; // rcx
  _BYTE *v8; // [rsp+0h] [rbp-70h]
  __int64 v9; // [rsp+8h] [rbp-68h]
  _BYTE *v10; // [rsp+20h] [rbp-50h]
  __int64 v11; // [rsp+28h] [rbp-48h]
  unsigned __int64 v12; // [rsp+38h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  v8 = nullptr;
  v10 = nullptr;
  v9 = 0;
  v11 = 0;
  if ( !(unsigned __int8)print_tinfo() )
  {
    v10 = (_BYTE *)qvector_reserve();
    v11 = 2;
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
  v5 = s1;
  if ( v9 )
    LODWORD(v5) = (_DWORD)v8;
  v6 = s1;
  if ( v11 )
    LODWORD(v6) = (_DWORD)v10;
  sub_32BE10(a1, a2, 31, (_DWORD)v6, (_DWORD)v5, a4);
  if ( v10 )
    qfree();
  if ( v8 )
    qfree();
  return v12 - __readfsqword(0x28u);
}

