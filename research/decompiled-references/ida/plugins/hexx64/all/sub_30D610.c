_DWORD *__fastcall sub_30D610(unsigned __int64 *a1, __int64 a2, __int64 *a3, unsigned __int8 *a4, double a5, __m128 a6)
{
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned __int8 *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  int *v16; // rcx
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // r9d
  int v20; // r8d
  int v21; // r9d
  char v22; // al
  __int64 v23; // rdi
  char v24; // al
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+8h] [rbp-B0h]
  __int64 v28; // [rsp+8h] [rbp-B0h]
  int v29; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v30[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v31; // [rsp+30h] [rbp-88h] BYREF
  __int128 v32; // [rsp+38h] [rbp-80h]
  __int64 v33[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v34; // [rsp+60h] [rbp-58h] BYREF
  __int128 v35; // [rsp+68h] [rbp-50h]
  unsigned __int64 v36; // [rsp+78h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  while ( 1 )
  {
    v10 = sub_129440(a2, (__int64)a4, (__int64)a3, 0, a5, a6);
    v11 = v10;
    if ( !v10 )
      return nullptr;
    if ( *(_BYTE *)(v10 + 64) )
    {
      v12 = (unsigned __int8 *)(v10 + 64);
      if ( !sub_1255D0(a4, (__int64)a1, v10 + 64, 0, a5) )
        break;
    }
    v9 = *(_DWORD *)v11;
    if ( *(_DWORD *)v11 != 4 )
      goto LABEL_9;
    a4 = (unsigned __int8 *)(v11 + 32);
  }
  if ( *(_DWORD *)v11 == 8 )
  {
    sub_123A40((__int64)&v29, v12, v13, v14);
    if ( (unsigned __int8)sub_126F10(&v29, a1, *(_DWORD *)(v11 + 36), v17, a5) )
    {
      v30[0] = 0;
      v30[1] = 0;
      v31 = 0;
      v32 = 0;
      sub_127FE0(a2, v30, (__int64)&v29, 0, v18, v19, 0.0, a6);
      a5 = 0.0;
      v33[0] = 0;
      v33[1] = 0;
      v34 = 0;
      v35 = 0;
      sub_127FE0(a2, v33, (__int64)a4, 0, v20, v21, 0.0, a6);
      v22 = sub_64820(v33, v30);
      v23 = v34;
      if ( v22 )
      {
        v24 = sub_317F40(&v31, (__int64)&v34);
        v23 = v34;
        if ( v24 )
        {
          v25 = v11 + 32;
          if ( v34 )
          {
            *(_QWORD *)&v35 = 0;
            qfree(v34);
            v25 = v11 + 32;
          }
          v27 = v25;
          qfree(v33[0]);
          v26 = v27;
          if ( v31 )
          {
            *(_QWORD *)&v32 = 0;
            qfree(v31);
            v26 = v27;
          }
          v28 = v26;
          qfree(v30[0]);
          sub_11CDA0((__int64)&v29);
          return (_DWORD *)v28;
        }
      }
      if ( v23 )
      {
        *(_QWORD *)&v35 = 0;
        qfree(v23);
      }
      qfree(v33[0]);
      if ( v31 )
      {
        *(_QWORD *)&v32 = 0;
        qfree(v31);
      }
      qfree(v30[0]);
    }
    sub_11CDA0((__int64)&v29);
  }
  v9 = *(_DWORD *)v11;
LABEL_9:
  if ( v9 != 5 )
    return sub_30D1C0(v11);
  v16 = (int *)sub_129440(a2, v11 + 32, (__int64)a3, 0, a5, a6);
  if ( !v16 )
    return nullptr;
  return sub_30D340((__int64)a1, a2, a3, v16, a5, a6);
}

