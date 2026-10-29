unsigned __int64 __fastcall sub_40F0(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int a7)
{
  unsigned __int64 v8; // r14
  __int64 v11; // r12
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rax
  bool v15; // cf
  __int64 v16; // rax
  __int64 v17; // r15
  unsigned __int64 v18; // rsi
  __int64 v19; // r13
  unsigned int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rcx
  int v23; // r15d
  __int64 v24; // rdi
  const char *v26; // rsi
  __int64 v27; // [rsp+0h] [rbp-68h]
  __int64 v28; // [rsp+8h] [rbp-60h]
  unsigned __int16 v29; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int16 v30; // [rsp+26h] [rbp-42h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v27 = a4;
  v28 = a5;
  v31 = __readfsqword(0x28u);
  v8 = *a1;
  if ( a3 )
  {
    v11 = a6;
    if ( a3 >= qlsize(a2) )
LABEL_21:
      sub_4040((__int64)"Truncated input file");
    if ( a7 )
    {
      qlseek(a2, a3, 0);
      if ( (int)v11 > 0 )
      {
        while ( 1 )
        {
          lread(a2, &v29, 2);
          lread(a2, &v30, 2);
          v13 = v30;
          if ( v30 )
          {
            v14 = v29 * (unsigned int)v30;
            v15 = __CFADD__(v8, v14);
            v16 = v8 + v14;
            v17 = v16;
            if ( v15 )
              goto LABEL_21;
            v18 = v16 - *a1;
            if ( v18 > 0x10000 )
              sub_4040(
                (__int64)"Too big segment (bigger than 64KB) has been encountered\n"
                         "when parsing iterated data (%llu bytes)",
                v18);
            v19 = qlseek(a2, 0, 1);
            v20 = enable_flags(v8, v17, 0xFFFFFFFFLL);
            if ( v20 )
            {
              v26 = (const char *)qstrerror(v20);
              sub_4040((__int64)"%s", v26);
            }
            v22 = v30;
            v23 = 0;
            v13 = v30;
            if ( v29 )
              break;
          }
LABEL_16:
          LODWORD(v11) = v11 - 4 - v13;
          if ( (int)v11 <= 0 )
            goto LABEL_13;
        }
        while ( (unsigned int)file2base(a2, v19, v8, v8 + v22, 0, v21, v27, v28) )
        {
          v22 = v30;
          ++v23;
          v13 = v30;
          v8 += v30;
          if ( (unsigned __int16)v23 >= v29 )
            goto LABEL_16;
        }
      }
    }
    else
    {
      v8 += v11;
      file2base(a2, a3, *a1, v8, 1, v12, v27, v28);
    }
  }
LABEL_13:
  a1[2] = 0;
  add_segm_ex(a1, v27, v28, (unsigned int)dword_B270);
  while ( v8 < a1[1] )
  {
    v24 = v8++;
    put_byte(v24, 0);
  }
  return v31 - __readfsqword(0x28u);
}

