__int64 __fastcall sub_131000(
        unsigned __int64 *a1,
        const __m128i *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __m128i a7,
        __m128 a8,
        __int64 a9,
        char a10)
{
  char v10; // r11
  unsigned __int64 v13; // r15
  const __m128i *v14; // r10
  unsigned int v17; // eax
  unsigned __int8 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 *v22; // rcx
  int v23; // edx
  __int64 (__fastcall **v24)(); // rsi
  unsigned __int64 *v25; // r12
  __int64 (__fastcall **v26)(); // r13
  __int64 v27; // rax
  __int64 v28; // rdx
  _DWORD *v29; // rax
  char v30; // al
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  char v38; // al
  const __m128i *v39; // r10
  char v40; // r11
  char v41; // al
  char v42; // al
  unsigned __int8 *v43; // [rsp+0h] [rbp-C8h]
  _DWORD *v44; // [rsp+0h] [rbp-C8h]
  const __m128i *v45; // [rsp+8h] [rbp-C0h]
  unsigned __int8 *v46; // [rsp+10h] [rbp-B8h]
  const __m128i *v47; // [rsp+10h] [rbp-B8h]
  unsigned __int8 *v48; // [rsp+18h] [rbp-B0h]
  char v49; // [rsp+18h] [rbp-B0h]
  char v50; // [rsp+20h] [rbp-A8h]
  char v51[16]; // [rsp+30h] [rbp-98h] BYREF
  char v52[16]; // [rsp+40h] [rbp-88h] BYREF
  __int64 (__fastcall **v53)(); // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 *v54; // [rsp+58h] [rbp-70h]
  const __m128i *v55; // [rsp+60h] [rbp-68h]
  __int64 v56; // [rsp+68h] [rbp-60h]
  int v57; // [rsp+70h] [rbp-58h]
  int v58; // [rsp+74h] [rbp-54h]
  unsigned __int8 v59; // [rsp+78h] [rbp-50h]
  unsigned __int64 v60; // [rsp+88h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  v10 = a10;
  if ( (*(_BYTE *)(a3 + 4) & 0x10) != 0 || *(_DWORD *)(a3 + 68) >= a4 )
    return 0;
  v13 = a1[12];
  v14 = a2;
  if ( a6 )
  {
    v19 = (unsigned __int8 *)sub_30D1C0(a3);
    v14 = a2;
    v10 = a10;
    if ( v19 )
    {
      if ( *((_DWORD *)v19 + 1) <= a4 )
      {
        v43 = v19;
        v54 = nullptr;
        sub_123A40((__int64)&v53, v19, v20, v21);
        v22 = v54;
        v23 = 8;
        v24 = v53;
        if ( *((_DWORD *)v43 + 1) == a4 )
          v23 = 4;
        v25 = *(unsigned __int64 **)(a3 + 40);
        v26 = *(__int64 (__fastcall ***)())(a3 + 32);
        *(_DWORD *)a3 = v23;
        *(_QWORD *)(a3 + 32) = v24;
        *(_QWORD *)(a3 + 40) = v22;
        sub_11CDA0(a3 + 48);
        *(_DWORD *)(a3 + 68) = a4;
        v53 = v26;
        v54 = v25;
        sub_11CDA0((__int64)&v53);
        return 1;
      }
    }
  }
  v17 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 <= 0xBu )
  {
    if ( v17 <= 9 )
    {
      if ( v17 == 2 )
      {
        if ( *(_BYTE *)(v13 + 145) != a6 )
          sub_12C760(a3 + 48, a1, *(_QWORD *)(a3 + 24), (unsigned int)(*(_DWORD *)(a3 + 68) - a4), a7);
LABEL_9:
        *(_DWORD *)(a3 + 68) = a4;
        return 1;
      }
      goto LABEL_16;
    }
    if ( *(_DWORD *)(a3 + 36) >= a4 )
    {
      if ( *(_DWORD *)(a3 + 36) == a4 )
        *(_DWORD *)a3 = 4;
      goto LABEL_9;
    }
    return 0;
  }
  if ( v17 == 13 )
  {
    if ( a5 )
    {
      if ( *(_BYTE *)(a3 + 48) == 4 )
      {
        v27 = *(_QWORD *)(a3 + 56);
        if ( *(_DWORD *)v27 == 12 && 2 * *(_DWORD *)(a3 + 68) == a4 )
        {
          if ( *(_BYTE *)(v27 + 32) == 4 )
          {
            v28 = *(_QWORD *)(v27 + 40);
            if ( *(_DWORD *)v28 == 9 )
            {
              v46 = (unsigned __int8 *)(v27 + 48);
              goto LABEL_31;
            }
          }
          if ( *(_BYTE *)(v27 + 48) == 4 )
          {
            v28 = *(_QWORD *)(v27 + 56);
            if ( *(_DWORD *)v28 == 9 )
            {
              v46 = (unsigned __int8 *)(v27 + 32);
LABEL_31:
              if ( v28 )
              {
                if ( *(_BYTE *)(v28 + 32) == 4 )
                {
                  v29 = *(_DWORD **)(v28 + 40);
                  v44 = v29;
                  if ( *v29 == 35 )
                  {
                    v50 = v10;
                    v45 = v14;
                    v48 = (unsigned __int8 *)(a3 + 32);
                    v30 = sub_130BC0(v14, a5, (__int64)(v29 + 8), a5, a3 + 32, 0, a7, a8);
                    v14 = v45;
                    v10 = v50;
                    if ( v30 )
                    {
                      v31 = sub_130BC0(v45, a5, (__int64)(v44 + 12), a5, (__int64)v46, 0, a7, a8);
                      v14 = v45;
                      v10 = v50;
                      if ( v31 )
                      {
                        sub_123A40((__int64)v51, v48, v32, v33);
                        sub_123A40((__int64)v52, v46, v34, v35);
                        sub_123A40((__int64)&v53, (unsigned __int8 *)(a3 + 64), v36, v37);
                        v38 = sub_131920(a1, v45, a5, (__int64)v51, a6, a9);
                        v39 = v45;
                        v40 = v50;
                        if ( v38 )
                        {
                          v41 = sub_131920(a1, v45, a5, (__int64)v52, a6, a9);
                          v39 = v45;
                          v40 = v50;
                          if ( v41 )
                          {
                            v42 = sub_131920(a1, v45, a5, (__int64)&v53, a6, a9);
                            v39 = v45;
                            v40 = v50;
                            if ( v42 )
                            {
                              sub_11CA10((char *)v48, v51);
                              sub_11CA10((char *)(a3 + 48), v52);
                              sub_11CA10((char *)(a3 + 64), (char *)&v53);
                              sub_11CDA0((__int64)&v53);
                              sub_11CDA0((__int64)v52);
                              sub_11CDA0((__int64)v51);
                              return 1;
                            }
                          }
                        }
                        v49 = v40;
                        v47 = v39;
                        sub_11CDA0((__int64)&v53);
                        sub_11CDA0((__int64)v52);
                        sub_11CDA0((__int64)v51);
                        v14 = v47;
                        v10 = v49;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_16:
  v54 = a1;
  v55 = v14;
  v53 = &off_4DD930;
  v56 = a5;
  v57 = a4;
  v58 = a9;
  v59 = a6;
  return sub_122110((_DWORD *)a3, v10, (__int64)&v53);
}

