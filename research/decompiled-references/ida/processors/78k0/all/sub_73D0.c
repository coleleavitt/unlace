unsigned __int64 __fastcall sub_73D0(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v3; // r12
  char v4; // al
  __int64 v6; // r12
  char v7[136]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v8; // [rsp+A8h] [rbp-30h]

  v3 = "CSEG";
  v4 = *(_BYTE *)(a3 + 184);
  v8 = __readfsqword(0x28u);
  if ( v4 != 2 )
  {
    v3 = "RSEG";
    if ( v4 == 3 )
      v3 = "DSEG";
  }
  get_segm_name();
  sub_6C20(a2, 0xFFFFFFFFLL, (__int64)"%s %s ", v3, (const char *)&qword_A918);
  if ( (getinf() & 0x100) != 0 )
  {
    v6 = *(_QWORD *)(a2 + 16);
    if ( v6 != get_segm_base() )
    {
      btoa64();
      sub_6C20(a2, 0xFFFFFFFFLL, (__int64)"%s %s", *(const char **)(*(_QWORD *)(a1 + 24) + 32LL), v7);
    }
  }
  return v8 - __readfsqword(0x28u);
}

