unsigned __int64 __fastcall sub_75FB0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // r13
  unsigned __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // rax
  void *v11; // rdi
  unsigned __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-198h]
  _BYTE v16[24]; // [rsp+10h] [rbp-188h] BYREF
  char v17[24]; // [rsp+28h] [rbp-170h] BYREF
  char v18[32]; // [rsp+40h] [rbp-158h] BYREF
  void *v19; // [rsp+60h] [rbp-138h] BYREF
  __int128 v20; // [rsp+68h] [rbp-130h]
  void *ptr; // [rsp+78h] [rbp-120h] BYREF
  __int128 v22; // [rsp+80h] [rbp-118h]
  __int64 v23; // [rsp+90h] [rbp-108h] BYREF
  __int128 v24; // [rsp+98h] [rbp-100h]
  __int64 v25; // [rsp+A8h] [rbp-F0h]
  __int128 v26; // [rsp+B0h] [rbp-E8h]
  int v27; // [rsp+C0h] [rbp-D8h]
  __int64 v28; // [rsp+C8h] [rbp-D0h]
  int v29; // [rsp+D0h] [rbp-C8h]
  _BYTE v30[120]; // [rsp+E0h] [rbp-B8h] BYREF
  unsigned __int64 v31; // [rsp+158h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( a1[1] != a2 )
  {
    sub_73590((__int64)v16, nullptr, nullptr, nullptr);
    v20 = 0;
    v19 = nullptr;
    sub_66360(&v19, (__int64)v16);
    ptr = nullptr;
    v22 = 0;
    sub_66360(&ptr, (__int64)v17);
    v23 = 0;
    v24 = 0;
    sub_66360(&v23, (__int64)v18);
    v3 = a1[1];
    v25 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v26 = 0;
    if ( a2 < v3 )
    {
      v8 = a2;
      v9 = 120 * a2;
      do
      {
        v10 = v9 + *a1;
        v11 = *(void **)(v10 + 72);
        if ( v11 )
        {
          *(_QWORD *)(v10 + 80) = 0;
          v15 = v10;
          j__free(v11);
          v10 = v15;
        }
        ++v8;
        v9 += 120;
        sub_2F570(v10);
      }
      while ( v3 != v8 );
    }
    else
    {
      if ( v3 >= a2 )
      {
LABEL_10:
        sub_2F5C0((__int64)&v19);
        sub_2F570((__int64)v16);
        return v31 - __readfsqword(0x28u);
      }
      v4 = *a1;
      v5 = a1[2];
      if ( (unsigned __int64)&v19 >= *a1 && (unsigned __int64)&v19 < v4 + 120 * v5 )
      {
        sub_2F620((__int64)v30, (__int64)&v19);
        if ( a1[2] < a2 )
          *a1 = sub_1987B0(a1, *a1, a2, 120);
        v12 = a1[1];
        v13 = 120 * v12;
        if ( v12 < a2 )
        {
          do
          {
            sub_2F620(v13 + *a1, (__int64)v30);
            ++v12;
            v13 += 120;
          }
          while ( a2 != v12 );
        }
        a1[1] = a2;
        sub_2F5C0((__int64)v30);
        goto LABEL_10;
      }
      if ( v5 >= a2 || (v14 = sub_1987B0(a1, *a1, a2, 120), v3 = a1[1], *a1 = v14, v4 = v14, v3 < a2) )
      {
        v6 = 120 * v3;
        while ( 1 )
        {
          sub_2F620(v6 + v4, (__int64)&v19);
          ++v3;
          v6 += 120;
          if ( v3 >= a2 )
            break;
          v4 = *a1;
        }
      }
    }
    a1[1] = a2;
    goto LABEL_10;
  }
  return v31 - __readfsqword(0x28u);
}
