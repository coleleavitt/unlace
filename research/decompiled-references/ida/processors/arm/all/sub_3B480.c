unsigned __int64 __fastcall sub_3B480(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // bp
  int v4; // eax
  unsigned __int64 v5; // [rsp+18h] [rbp-30h]

  v5 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) == 0 && !(unsigned __int8)is_spec_segm() )
  {
    get_segm_name();
    v3 = getinf(40);
    v4 = strlen(*(const char **)(*(_QWORD *)(a1 + 24) + 48LL));
    sub_39BE0(a2, (__int64)"%-*s ends", v3 - 2 - v4, &s1);
  }
  return v5 - __readfsqword(0x28u);
}
