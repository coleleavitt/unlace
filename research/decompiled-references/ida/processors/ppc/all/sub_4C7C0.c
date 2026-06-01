unsigned __int64 __fastcall sub_4C7C0(__int64 a1, __int64 a2, const char *a3, double a4, double a5)
{
  _QWORD *v8; // rax
  _QWORD *v9; // r12
  int v11; // r14d
  __int64 v12; // rax
  _QWORD *v13; // r15
  const char *v14; // rdi
  const char *v15; // rax
  const char *v16; // r12
  const char *v17; // rsi
  const char *v18; // rsi
  const char *v19; // rdx
  const char *v20; // rdx
  const char *v21; // [rsp+10h] [rbp-58h] BYREF
  __int128 v22; // [rsp+18h] [rbp-50h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 168) || a2 == -1 )
    return v23 - __readfsqword(0x28u);
  v8 = (_QWORD *)getseg(a2);
  v9 = v8;
  if ( !v8 || *v8 != a2 )
    goto LABEL_5;
  a4 = 0.0;
  v21 = nullptr;
  v22 = 0;
  get_segm_name(&v21, v8, 1);
  v19 = s1;
  if ( (_QWORD)v22 )
    v19 = v21;
  if ( (int)sub_4C280(1u, (__int64)"Move MMIO segment %s from %a to %a?\n", v19, 0.0, a5) <= 0 )
  {
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree(v21, "Move MMIO segment %s from %a to %a?\n", v20, 0.0, a5);
    }
LABEL_5:
    if ( (*(_BYTE *)(a1 + 456) & 1) != 0 )
    {
      if ( (unsigned __int8)is_mapped(a2) )
      {
        sub_337D0((__int64)"Moving MMIO register names from %a to %a...\n", a4, a5);
        if ( *(_QWORD *)(a1 + 168) )
        {
          v11 = 0;
          v12 = 0;
          do
          {
            v13 = (_QWORD *)(*(_QWORD *)(a1 + 160) + 88 * v12);
            v14 = (const char *)*v13;
            v15 = &a3[*v13];
            if ( a3 == (const char *)-1LL )
              v15 = (const char *)*v13;
            v16 = v15;
            if ( (*(_BYTE *)(a1 + 456) & 1) != 0 )
            {
              set_name(&v14[a2], "", 256);
              set_cmt(&v14[a2], "", 1);
              v17 = s1;
              if ( v13[2] )
                v17 = (const char *)v13[1];
              set_name(v16, v17, 4096);
              v18 = s1;
              if ( v13[5] )
                v18 = (const char *)v13[4];
              set_cmt(v16, v18, 1);
            }
            v12 = ++v11;
          }
          while ( (unsigned __int64)v11 < *(_QWORD *)(a1 + 168) );
        }
      }
    }
    return v23 - __readfsqword(0x28u);
  }
  move_segm(v9, a3, 0);
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21, a3);
  }
  return v23 - __readfsqword(0x28u);
}

