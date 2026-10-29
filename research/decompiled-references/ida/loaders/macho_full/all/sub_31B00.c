unsigned __int64 __fastcall sub_31B00(__int64 a1, _DWORD *a2, __int64 (*a3)(), __int64 (*a4)())
{
  unsigned int *v5; // r15
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r13
  size_t v11; // r13
  __int64 v12; // rcx
  unsigned __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // r14
  __int64 v17; // rax
  unsigned __int64 v18; // r15
  __int64 v20; // rdx
  unsigned int v21; // ecx
  __int64 v22; // rsi
  char *v23; // r12
  int v24; // r13d
  unsigned int v25; // eax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r8
  char *v28; // r14
  size_t v29; // rax
  unsigned int v30; // edx
  unsigned __int64 v31; // rdx
  __int64 v32; // [rsp+0h] [rbp-E0h]
  unsigned int v33; // [rsp+0h] [rbp-E0h]
  size_t v34; // [rsp+8h] [rbp-D8h]
  size_t v35; // [rsp+8h] [rbp-D8h]
  unsigned __int64 v36; // [rsp+10h] [rbp-D0h]
  __int64 v37; // [rsp+18h] [rbp-C8h]
  size_t n; // [rsp+20h] [rbp-C0h]
  size_t na; // [rsp+20h] [rbp-C0h]
  size_t v40; // [rsp+28h] [rbp-B8h]
  __int64 v41; // [rsp+30h] [rbp-B0h]
  _BYTE v42[8]; // [rsp+38h] [rbp-A8h] BYREF
  unsigned int v43; // [rsp+40h] [rbp-A0h]
  unsigned int v44; // [rsp+44h] [rbp-9Ch]
  __m128i v45; // [rsp+48h] [rbp-98h] BYREF
  unsigned int *v46; // [rsp+58h] [rbp-88h] BYREF
  __int128 v47; // [rsp+60h] [rbp-80h]
  void *v48; // [rsp+78h] [rbp-68h] BYREF
  __int128 v49; // [rsp+80h] [rbp-60h]
  __int64 v50; // [rsp+90h] [rbp-50h]
  unsigned int v51; // [rsp+98h] [rbp-48h]
  __int16 v52; // [rsp+9Ch] [rbp-44h]
  unsigned __int64 v53; // [rsp+A0h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v45 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_63DF8, (__m128i)(unsigned __int64)v42);
  if ( !(unsigned __int8)sub_27280(a1, &v45, a3, a4)
    || !v44
    || (**(unsigned int (__fastcall ***)(_DWORD *, _BYTE *))a2)(a2, v42) )
  {
    return v53 - __readfsqword(0x28u);
  }
  v46 = nullptr;
  v47 = 0;
  if ( !sub_31220(a1, (__int64 *)&v46, v43, v44, (__int64)"chained fixup info size", 0) || (unsigned __int64)v47 <= 0x1B )
    goto LABEL_35;
  v5 = v46;
  v36 = (unsigned __int64)v46 + v47;
  v6 = a2[2];
  if ( (v6 & 1) == 0
    || v46[6] == 1
    || (v20 = v46[2], !(_DWORD)v20)
    || (v21 = v46[4]) == 0
    || (v22 = v46[5] - 1, (unsigned int)v22 > 2)
    || (v23 = (char *)v46 + v20, v33 = dword_56B68[v22], (unsigned __int64)v46 + v20 + v33 * v21 >= v36)
    || (v24 = 0, (unsigned __int64)v23 >= v36) )
  {
LABEL_7:
    if ( (v6 & 2) == 0 )
      goto LABEL_35;
    v7 = v5[1];
    if ( v7 + 8 >= (unsigned __int64)v47 )
      goto LABEL_35;
    n = (size_t)v5 + v7;
    v8 = *(unsigned int *)((char *)v5 + v7);
    if ( (unsigned __int64)&v5[v8 + 1] + v7 >= v36 )
      goto LABEL_35;
    if ( !*(_BYTE *)(a1 + 440) )
      sub_28840(a1);
    v41 = *(_QWORD *)(a1 + 448);
    if ( v41 == -1 )
    {
      v9 = 0;
      if ( *(_QWORD *)(a1 + 456) != -1 )
        v9 = *(_QWORD *)(a1 + 456);
      v41 = v9;
    }
    v34 = n;
    v40 = 4 * v8 + n;
    if ( (_DWORD)v8 )
    {
      do
      {
        v10 = *(unsigned int *)(v34 + 4);
        if ( (_DWORD)v10 )
        {
          if ( n + v10 + 24 < v36 )
          {
            v11 = n + v10;
            v12 = *(unsigned __int16 *)(v11 + 20);
            v37 = v12;
            if ( v11 + 2 * v12 + 22 < v36 )
            {
              if ( (_WORD)v12 )
              {
                v32 = 0;
                do
                {
                  v13 = *(unsigned __int16 *)(v11 + 2 * v32 + 22);
                  if ( (_WORD)v13 != 0xFFFF )
                  {
                    v14 = *(unsigned __int16 *)(v11 + 4);
                    v15 = *(_QWORD *)(v11 + 8) + v41 + (int)v32 * (int)v14;
                    v16 = v15 + v14;
                    do
                    {
                      v13 += v15;
                      if ( v13 >= v16 )
                        break;
                      v17 = *(_BYTE *)(a1 + 161) ? sub_28DA0(a1, v13) : sub_28D10(a1, v13);
                      v18 = v17;
                      if ( v17 == -1 )
                        break;
                      if ( (*(unsigned int (__fastcall **)(_DWORD *, unsigned __int64, __int64, _QWORD))(*(_QWORD *)a2 + 16LL))(
                             a2,
                             v13,
                             v17,
                             *(unsigned __int16 *)(v11 + 6)) )
                      {
                        goto LABEL_35;
                      }
                      v15 = sub_1B550(a1, v18, *(unsigned __int16 *)(v11 + 6));
                    }
                    while ( v15 );
                  }
                  ++v32;
                }
                while ( v37 != v32 );
              }
            }
          }
        }
        v34 += 4LL;
      }
      while ( v40 != v34 );
    }
    if ( v46 )
      goto LABEL_36;
    return v53 - __readfsqword(0x28u);
  }
  while ( 1 )
  {
    v51 = 0;
    v50 = 0;
    v52 = 0;
    v49 = 0;
    v30 = v5[5];
    v48 = nullptr;
    v51 = v30;
    if ( v30 > 2 )
    {
      if ( v30 == 3 )
      {
        v31 = *(_QWORD *)v23;
        LOBYTE(v52) = *(_QWORD *)v23;
        v26 = HIDWORD(v31);
        HIBYTE(v52) = BYTE2(v31) & 1;
        v50 = *((_QWORD *)v23 + 1);
        goto LABEL_51;
      }
LABEL_63:
      v26 = 0;
      goto LABEL_51;
    }
    if ( !v30 )
      goto LABEL_63;
    v25 = *(_DWORD *)v23;
    LOBYTE(v52) = *(_DWORD *)v23;
    HIBYTE(v52) = BYTE1(v25) & 1;
    if ( v30 == 2 )
      v50 = *((unsigned int *)v23 + 1);
    v26 = v25 >> 9;
LABEL_51:
    v27 = v26 + v5[3];
    v28 = (char *)v5 + v27;
    if ( (unsigned __int64)v5 + v27 >= v36 )
      goto LABEL_66;
    if ( v28 )
    {
      v29 = strlen((const char *)v5 + v27);
      if ( v29 )
      {
        na = v29;
        v35 = v29 + 1;
        v48 = (void *)qvector_reserve();
        *(_QWORD *)&v49 = v35;
        memmove(v48, v28, na);
        *((_BYTE *)v48 + na) = 0;
      }
    }
    if ( (*(unsigned int (__fastcall **)(_DWORD *, void **))(*(_QWORD *)a2 + 8LL))(a2, &v48) )
      break;
    v23 += v33;
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree();
    }
    if ( ++v24 >= v5[4] || (unsigned __int64)v23 >= v36 )
    {
LABEL_66:
      v6 = a2[2];
      goto LABEL_7;
    }
  }
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree();
  }
LABEL_35:
  if ( v46 )
  {
LABEL_36:
    *(_QWORD *)&v47 = 0;
    qfree();
  }
  return v53 - __readfsqword(0x28u);
}

