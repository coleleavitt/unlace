__int64 __fastcall sub_152A20(
        unsigned __int64 *a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        int *a5,
        int *a6,
        __m128i a7,
        __m128 a8)
{
  int v9; // edx
  int *v13; // r15
  unsigned int v14; // r14d
  int *v16; // rax
  int *v17; // r10
  unsigned __int8 **v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  char *v21; // rdi
  __int64 v22; // r14
  int v23; // eax
  __int64 v24; // r8
  char v25; // al
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r14
  __int64 v32; // rsi
  int v33; // edx
  int v34; // ecx
  __int64 v35; // rax
  unsigned __int8 *v36; // rcx
  __int64 v37; // rdx
  unsigned __int64 *v38; // [rsp+8h] [rbp-A0h]
  int *v39; // [rsp+8h] [rbp-A0h]
  int *v40; // [rsp+10h] [rbp-98h]
  int v41; // [rsp+24h] [rbp-84h]
  __int64 v42; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int8 *v43; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int8 *v44; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v45; // [rsp+50h] [rbp-58h] BYREF
  __int64 v46; // [rsp+58h] [rbp-50h]
  unsigned __int64 v47; // [rsp+68h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  if ( (a6[1] & 0x10) != 0 )
    return 0;
  v9 = *a6;
  v13 = a5;
  if ( *a6 == 33 )
  {
    v9 = *a5;
    v16 = a6;
    a6 = a5;
    v13 = v16;
LABEL_6:
    v17 = a6;
    v42 = a4;
    v45 = 0xFFFFFFFF00000000LL;
    v46 = 0;
    if ( (unsigned int)(v9 - 8) <= 1 )
    {
      while ( *((_BYTE *)v17 + 32) == 4 )
      {
        v17 = *((int **)v17 + 5);
        if ( (unsigned int)(*v17 - 8) > 1 )
          goto LABEL_18;
      }
    }
    else
    {
LABEL_18:
      if ( v17 )
      {
        if ( *v17 == 32 && *((_BYTE *)v17 + 32) == 4 && **((_DWORD **)v17 + 5) == 20 )
        {
          v39 = a6;
          v40 = v17;
          v25 = sub_11FD80((char *)v17 + 48, (__int64 *)&v44, 0);
          a6 = v39;
          if ( v25 )
          {
            if ( !v44 )
            {
              v26 = sub_11C8A0(*((_QWORD *)v40 + 5), &v44);
              a6 = v39;
              if ( v26 )
              {
                v27 = *(unsigned int *)(v26 + 4);
                v28 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v26 + 8) + 16LL), v27, 0);
                a6 = v39;
                if ( (v28 & (v28 - 1)) == 0 )
                {
                  v41 = log2ceil();
                  v31 = j__qalloc_or_throw(80, v27, v29, v30);
                  v32 = *((_QWORD *)v40 + 3);
                  *(_QWORD *)(v31 + 32) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v31 + 40) = 0;
                  *(_QWORD *)(v31 + 48) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v31 + 56) = 0;
                  *(_QWORD *)(v31 + 64) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v31 + 72) = 0;
                  sub_330970(v31, v32);
                  *(_DWORD *)v31 = 14;
                  sub_125180((unsigned __int8 *)(v31 + 32), v44);
                  v33 = *((_DWORD *)v44 + 1);
                  v34 = 8 * v33 - 1 - v41;
                  v35 = 1LL << v34;
                  if ( (unsigned __int64)v34 >= 0x40 )
                    v35 = 0;
                  sub_120A10(v31 + 48, a1, v35, v33, *((_QWORD *)v40 + 3), 0);
                  *(_DWORD *)(v31 + 68) = *((_DWORD *)v44 + 1);
                  sub_11CDA0((__int64)&v45);
                  v46 = v31;
                  LOBYTE(v45) = 4;
                  HIDWORD(v45) = *((_DWORD *)v44 + 1);
                  v38 = &v45;
LABEL_11:
                  v18 = &v43;
                  v21 = (char *)sub_11C8A0((__int64)v13, &v43);
                  if ( !v21 || (v18 = &v44, !(unsigned __int8)sub_11FD80(v21, (__int64 *)&v44, 0)) || v44 )
                  {
                    v22 = j__qalloc_or_throw(80, (__int64)v18, v19, v20);
                    *(_QWORD *)(v22 + 32) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v22 + 40) = 0;
                    *(_QWORD *)(v22 + 48) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v22 + 56) = 0;
                    *(_QWORD *)(v22 + 64) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v22 + 72) = 0;
                    *(_OWORD *)(v22 + 8) = 0;
                    sub_1253A0(v22, (__int64)v13);
                    v23 = *(_DWORD *)(v22 + 36);
                    *(_DWORD *)v22 = 13;
                    *(_DWORD *)(v22 + 68) = v23;
                    sub_11CDA0(a2);
                    *(_BYTE *)a2 = 4;
                    *(_QWORD *)(a2 + 8) = v22;
                    v24 = v42;
                    *(_DWORD *)(a2 + 4) = *(_DWORD *)(v22 + 68);
                    if ( !(unsigned __int8)sub_1528D0(a1, a3, a4, a2, v24, (__int64)v38, (__m128i)0LL, a8) )
                    {
                      sub_11CA10((char *)(v22 + 32), (char *)(v22 + 48));
                      v14 = sub_1528D0(a1, a3, a4, a2, v42, (__int64)v38, (__m128i)0LL, a8);
LABEL_16:
                      sub_11CDA0((__int64)&v45);
                      return v14;
                    }
LABEL_30:
                    v14 = 1;
                    goto LABEL_16;
                  }
                  v36 = v43;
                  if ( *v43 == 4 )
                  {
                    v37 = *((_QWORD *)v43 + 1);
                    if ( (unsigned int)(*(_DWORD *)v37 - 8) <= 1 )
                    {
                      v36 = (unsigned __int8 *)(v37 + 32);
                      v43 = (unsigned __int8 *)(v37 + 32);
                    }
                  }
                  if ( (unsigned __int8)sub_1528D0(a1, a3, a4, (__int64)v36, v42, (__int64)v38, a7, a8) )
                  {
                    sub_125180((unsigned __int8 *)a2, v43);
                    goto LABEL_30;
                  }
LABEL_33:
                  v14 = 0;
                  goto LABEL_16;
                }
              }
            }
          }
        }
      }
    }
    v38 = (unsigned __int64 *)sub_30D340((__int64)a1, (__int64)a3, &v42, a6);
    if ( !v38 )
      goto LABEL_33;
    goto LABEL_11;
  }
  v14 = 0;
  if ( *a5 == 33 )
    goto LABEL_6;
  return v14;
}

