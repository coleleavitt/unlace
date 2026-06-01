__int64 __fastcall sub_86EB0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v11; // rsi
  char v12; // al
  int v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 nlist_size; // r15
  __int64 nlist_ea; // rbp
  const char *nlist_name; // rax
  __int64 v25; // r9
  __int64 v26; // [rsp+0h] [rbp-48h]
  unsigned __int64 v27; // [rsp+8h] [rbp-40h]
  __int64 v28; // [rsp+8h] [rbp-40h]
  __int64 v29; // [rsp+10h] [rbp-38h]
  __int64 v30; // [rsp+18h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  if ( netnode_supfirst() != -1 )
    return v27 - __readfsqword(0x28u);
  v11 = -1;
  v12 = netnode_charval();
  if ( v12 == 1 )
    goto LABEL_7;
  if ( v12 == 2 )
    return v27 - __readfsqword(0x28u);
  if ( v12 )
  {
    sub_51660((__int64)"AUTOHIDE REGISTRY\nPostponed npurged information is corrupted", -1);
LABEL_7:
    *(_BYTE *)(a1 + 208) = 1;
    return v27 - __readfsqword(0x28u);
  }
  *(_BYTE *)(a1 + 208) = 1;
  v13 = 0;
  sub_496E0((__int64)"Performing purge-analysis for old database", -1);
  ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))callui)(25, -1, v14, v15, v16, v17);
  nlist_size = get_nlist_size();
  if ( nlist_size )
  {
    do
    {
      if ( (unsigned __int8)callui(27, v11, v18, v19, v20, v21, v26, v28, v29, v30) )
        break;
      nlist_ea = get_nlist_ea();
      nlist_name = (const char *)get_nlist_name();
      v11 = nlist_ea;
      if ( (unsigned __int8)sub_86D20(a1, nlist_ea, nlist_name) )
      {
        v11 = 0;
        show_auto();
      }
      ++v13;
    }
    while ( v13 < nlist_size );
  }
  netnode_supset();
  return callui(24, 10, 0, &callui, callui, v25, a7, a8, a9, a10);
}
