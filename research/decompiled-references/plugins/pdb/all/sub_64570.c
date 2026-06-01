__int64 __fastcall sub_64570(__int64 a1, __int64 *a2, __int64 **a3, __int16 a4, int a5)
{
  __int64 v5; // r15
  unsigned int v8; // eax
  __int64 *v9; // r14
  unsigned int v10; // ebx
  __int64 v11; // r12
  __int64 result; // rax
  __int64 *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  unsigned __int16 v19; // dx
  __int16 v20; // cx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int16 v25; // ax
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int16 v40; // [rsp+2Ch] [rbp-5Ch] BYREF
  unsigned __int16 v41; // [rsp+2Eh] [rbp-5Ah]
  _BYTE v42[4]; // [rsp+30h] [rbp-58h] BYREF
  int v43; // [rsp+34h] [rbp-54h]
  int v44; // [rsp+38h] [rbp-50h]
  int v45; // [rsp+3Ch] [rbp-4Ch]
  __int16 v46; // [rsp+40h] [rbp-48h]
  unsigned __int64 v47; // [rsp+48h] [rbp-40h]

  v5 = 16908415;
  v47 = __readfsqword(0x28u);
  do
  {
    v8 = (*(__int64 (__fastcall **)(__int64 *))(**a3 + 32))(*a3);
    v9 = *a3;
    v10 = v8;
    v11 = (*(__int64 (__fastcall **)(__int64 *))(**a3 + 32))(*a3);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, unsigned __int16 *, __int64))(*v9 + 48))(v9, &v40, 4) )
      break;
    result = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v9 + 40))(v9, v11);
    if ( !(_BYTE)result )
      break;
    if ( (unsigned __int16)(v41 - 4415) > 0x18u || !_bittest64(&v5, (unsigned int)v41 - 4415) )
      return result;
    v13 = *a3;
    v14 = **a3;
    switch ( v41 )
    {
      case 0x1141u:
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _BYTE *, __int64))(v14 + 48))(v13, v42, 16) )
          return 0;
        v21 = a2[1];
        v22 = *a2;
        v23 = v21 + 1;
        if ( a2[2] < (unsigned __int64)(v21 + 1) )
        {
          v33 = qvector_reserve(a2, v22, v23, 16);
          *a2 = v33;
          v22 = v33;
          v21 = a2[1];
          v23 = v21 + 1;
        }
        a2[1] = v23;
        v24 = 16 * v21 + v22;
        *(_WORD *)(v24 + 12) = 4417;
        *(_DWORD *)v24 = v44;
        *(_WORD *)(v24 + 4) = v45;
        v25 = v43;
        *(_DWORD *)(v24 + 8) = -1;
        *(_WORD *)(v24 + 6) = v25;
        v13 = *a3;
        break;
      case 0x1145u:
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _BYTE *, __int64))(v14 + 48))(v13, v42, 20) )
          return 0;
        v29 = a2[1];
        v30 = *a2;
        v31 = v29 + 1;
        if ( a2[2] < (unsigned __int64)(v29 + 1) )
        {
          v34 = qvector_reserve(a2, v30, v31, 16);
          *a2 = v34;
          v30 = v34;
          v29 = a2[1];
          v31 = v29 + 1;
        }
        a2[1] = v31;
        v32 = 16 * v29 + v30;
        *(_WORD *)(v32 + 12) = 4421;
        *(_DWORD *)v32 = v45;
        *(_WORD *)(v32 + 4) = v46;
        *(_WORD *)(v32 + 6) = v43;
        *(_DWORD *)(v32 + 8) = v44;
        v13 = *a3;
        break;
      case 0x1144u:
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _BYTE *, __int64))(v14 + 48))(v13, v42, 8) )
          return 0;
        v15 = a2[1];
        v16 = *a2;
        v17 = v15 + 1;
        if ( a2[2] < (unsigned __int64)(v15 + 1) )
        {
          v35 = qvector_reserve(a2, v16, v15 + 1, 16);
          v15 = a2[1];
          *a2 = v35;
          v16 = v35;
          v17 = v15 + 1;
        }
        a2[1] = v17;
        v18 = v16 + 16 * v15;
        *(_WORD *)(v18 + 12) = 4420;
        *(_DWORD *)v18 = a5;
        *(_WORD *)(v18 + 4) = a4;
LABEL_15:
        v19 = *(_WORD *)(a1 + 544);
        v20 = 22;
        if ( v19 != 0xFFFF && (unsigned int)v19 - 3 > 4 )
        {
          v20 = 334;
          if ( v19 != 208 )
          {
            if ( v19 == 104 )
            {
              v20 = 21;
            }
            else if ( v19 > 0x68u )
            {
              v20 = 21;
              if ( v19 != 244 && v19 != 240 )
              {
                v20 = 79;
                if ( v19 != 246 )
                  v20 = 0;
              }
            }
            else
            {
              v20 = 21;
              if ( (unsigned __int16)(v19 - 96) > 6u && v19 != 103 )
                v20 = 0;
            }
          }
        }
        *(_WORD *)(v18 + 6) = v20;
        *(_DWORD *)(v18 + 8) = v43;
        v13 = *a3;
        break;
      case 0x1142u:
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _BYTE *, __int64))(v14 + 48))(v13, v42, 16) )
          return 0;
        v26 = a2[1];
        v27 = *a2;
        v28 = v26 + 1;
        if ( a2[2] < (unsigned __int64)(v26 + 1) )
        {
          v36 = qvector_reserve(a2, v27, v26 + 1, 16);
          v26 = a2[1];
          *a2 = v36;
          v27 = v36;
          v28 = v26 + 1;
        }
        a2[1] = v28;
        v18 = v27 + 16 * v26;
        *(_WORD *)(v18 + 12) = 4418;
        *(_DWORD *)v18 = v44;
        *(_WORD *)(v18 + 4) = v45;
        goto LABEL_15;
    }
  }
  while ( (*(unsigned __int8 (__fastcall **)(__int64 *, unsigned __int64))(*v13 + 40))(
            v13,
            v40 + (unsigned __int64)v10 + 2) );
  return 0;
}
