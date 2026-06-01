unsigned __int64 __fastcall sub_82A60(__int64 a1)
{
  unsigned __int8 v2; // al
  __int64 v3; // rcx
  __int64 v4; // [rsp+0h] [rbp-38h]
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_spec_segm() )
  {
    v4 = 0;
    get_segm_name();
    if ( (*(_BYTE *)(get_ash() + 328) & 8) != 0 )
    {
      v3 = (unsigned int)(unsigned __int8)getinf() - 4;
      if ( (int)v3 <= 0 )
        v3 = 1;
      sub_7DAF0(a1, 0, (__int64)&unk_91A73, v3, 32, s1, 0);
    }
    else
    {
      v2 = getinf();
      sub_7DAF0(a1, 0, (__int64)&unk_91A81, (unsigned int)v2 - 1, s1);
    }
    if ( v4 )
      qfree();
  }
  return v5 - __readfsqword(0x28u);
}
