unsigned __int64 __fastcall sub_7D2C0(unsigned __int8 **a1, _BYTE *a2, double a3)
{
  unsigned __int8 *v3; // rax
  __int64 v4; // rdx
  __int64 v6[4]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v7[3]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+48h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v3 = *a1;
  if ( *a1 >= a1[1] )
    sub_7A4F0(a3);
  v4 = *v3;
  *a1 = v3 + 1;
  if ( (v4 & 0x80u) == 0LL )
  {
    v7[0] = v4;
    copy_tinfo_t();
    clear_tinfo_t();
    return v8 - __readfsqword(0x28u);
  }
  sub_7D150((__int64)v6, a1, a3);
  sub_7D150((__int64)v7, a1, a3);
  if ( !(unsigned __int8)deserialize_tinfo() )
  {
    if ( !under_debugger )
      sub_383060(0xC79Fu, a3);
LABEL_16:
    BUG();
  }
  if ( !sub_32CB80(a2, *((_QWORD *)a1[2] + 187)) )
  {
    if ( !under_debugger )
      sub_383060(0xCE4Du, a3);
    goto LABEL_16;
  }
  if ( v7[0] )
  {
    v7[1] = 0;
    qfree(v7[0]);
  }
  if ( v6[0] )
  {
    v6[1] = 0;
    qfree(v6[0]);
  }
  return v8 - __readfsqword(0x28u);
}

