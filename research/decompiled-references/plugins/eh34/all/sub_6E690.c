__int64 __fastcall sub_6E690(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  bool v3; // zf
  __int64 v5; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v6[2]; // [rsp+10h] [rbp-38h] BYREF
  __int16 v7; // [rsp+20h] [rbp-28h]
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v2 = s1;
  v3 = *(_QWORD *)(a2 + 8) == 0;
  v8 = __readfsqword(0x28u);
  v5 = 0;
  if ( !v3 )
    v2 = *(const char **)a2;
  if ( v2 && (v6[1] = v2, v7 = 0, v6[0] = get_idati(), create_tinfo(&v5, 61, 189, v6), (_BYTE)v5) )
  {
    *(_QWORD *)a1 = 0;
    copy_tinfo_t(a1, &v5);
    *(_BYTE *)(a1 + 8) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 8) = 0;
  }
  clear_tinfo_t(&v5);
  return a1;
}
