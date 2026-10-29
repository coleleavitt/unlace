__int64 __fastcall sub_13410(__int64 a1, int a2)
{
  __int64 v2; // r12
  __int64 v4; // r13
  __int64 v5; // rsi
  __int64 tinfo_size; // rbx
  const char *v8; // r14
  __int64 named_type_tid; // rax
  __int64 v10; // rax
  _QWORD v11[7]; // [rsp+0h] [rbp-38h] BYREF

  v11[1] = __readfsqword(0x28u);
  if ( (unsigned int)a2 > 0x11 )
    return 0;
  v2 = a2;
  v4 = a2 + 18LL;
  v5 = *(_QWORD *)(a1 + 8 * v4 + 8);
  if ( !v5 )
  {
    v8 = off_2E620[2 * v2];
    named_type_tid = get_named_type_tid(v8);
    v5 = named_type_tid;
    if ( named_type_tid != -1 && a2 != 10 )
    {
      *(_QWORD *)(a1 + 8 * v4 + 8) = named_type_tid;
      goto LABEL_4;
    }
    v10 = sub_12E90(a1, v8, a2);
    *(_QWORD *)(a1 + 8 * v2 + 152) = v10;
    v5 = v10;
  }
  if ( v5 == -1 )
    return 0;
LABEL_4:
  v11[0] = 0;
  if ( (unsigned __int8)get_type_by_tid(v11, v5) )
    tinfo_size = get_tinfo_size(0, v11[0], 0);
  else
    tinfo_size = 0;
  clear_tinfo_t(v11);
  return tinfo_size;
}
