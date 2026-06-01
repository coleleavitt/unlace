__int64 __fastcall sub_11FB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // edx
  _DWORD **v9; // rcx
  unsigned int v10; // edx
  unsigned __int64 **v11; // rcx
  unsigned int v12; // ecx
  __int64 **v13; // rcx
  __int64 *v14; // rdx
  __int64 *v15; // rdi
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 *v19; // rdi
  __int64 v20; // rcx
  const __m128i **v21; // rdx
  unsigned int v22; // edx
  __int64 *v23; // rcx
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 *v27; // rcx
  unsigned int v28; // edx
  __int64 *v29; // rcx
  unsigned int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rdi
  const char *v33; // r9
  __int64 v34; // rsi
  unsigned int v35; // r10d
  __int64 v36; // rdi
  __int64 v37; // r11
  __int64 v38; // rsi
  __int64 *v39; // rbp
  _DWORD *v40; // rdx
  __int64 v41; // rax
  unsigned int v42; // ecx
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // r8
  _QWORD *v46; // rdi
  __int64 *v47; // rdx
  _QWORD **v48; // rcx
  _QWORD **v49; // rdx
  const char **v50; // rdx
  unsigned int *v51; // rcx
  __int64 *v52; // rdx
  _QWORD **v53; // rcx
  __int64 **v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rsi
  _QWORD v57[5]; // [rsp+0h] [rbp-28h] BYREF

  v57[1] = __readfsqword(0x28u);
  if ( a2 > 60 )
  {
    if ( a2 != 99 )
      return 0;
    v42 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v47 = *(__int64 **)(a3 + 8);
      v48 = (_QWORD **)(v47 + 1);
      *(_QWORD *)(a3 + 8) = v47 + 1;
      v45 = *v47;
    }
    else
    {
      v43 = *(_QWORD *)(a3 + 16);
      v44 = v42 + 8;
      *(_DWORD *)a3 = v44;
      v45 = *(_QWORD *)(v43 + v42);
      if ( (unsigned int)v44 <= 0x2F )
      {
        *(_DWORD *)a3 = v42 + 16;
        v46 = *(_QWORD **)(v43 + v44);
        if ( v42 + 16 <= 0x2F )
        {
          *(_DWORD *)a3 = v42 + 24;
LABEL_47:
          sub_11240(a1, v45, v46);
          return 1;
        }
        v49 = *(_QWORD ***)(a3 + 8);
LABEL_50:
        *(_QWORD *)(a3 + 8) = v49 + 1;
        goto LABEL_47;
      }
      v48 = *(_QWORD ***)(a3 + 8);
    }
    v49 = v48 + 1;
    *(_QWORD *)(a3 + 8) = v48 + 1;
    v46 = *v48;
    goto LABEL_50;
  }
  if ( a2 < 0 )
    return 0;
  switch ( a2 )
  {
    case 0LL:
      netnode_check(v57, "$ wasm", 0, 1);
      *(_QWORD *)(a1 + 128) = v57[0];
      return 1;
    case 8LL:
      v30 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v50 = *(const char ***)(a3 + 8);
        v51 = (unsigned int *)(v50 + 1);
        *(_QWORD *)(a3 + 8) = v50 + 1;
        v33 = *v50;
      }
      else
      {
        v31 = *(_QWORD *)(a3 + 16);
        v32 = v30 + 8;
        *(_DWORD *)a3 = v32;
        v33 = *(const char **)(v31 + v30);
        if ( (unsigned int)v32 <= 0x2F )
        {
          v34 = v30 + 16;
          *(_DWORD *)a3 = v34;
          v35 = *(_DWORD *)(v31 + v32);
          if ( (unsigned int)v34 <= 0x2F )
          {
            v36 = v30 + 24;
            *(_DWORD *)a3 = v36;
            v37 = *(_QWORD *)(v31 + v34);
            if ( (unsigned int)v36 <= 0x2F )
            {
              v38 = v30 + 32;
              *(_DWORD *)a3 = v38;
              v39 = *(__int64 **)(v31 + v36);
              if ( (unsigned int)v38 <= 0x2F )
              {
                v40 = (_DWORD *)(v38 + v31);
                *(_DWORD *)a3 = v30 + 40;
                goto LABEL_36;
              }
              v40 = *(_DWORD **)(a3 + 8);
LABEL_55:
              *(_QWORD *)(a3 + 8) = v40 + 2;
LABEL_36:
              v41 = sub_FF90(a1, v33, v35, v37, *v40 != 0);
              if ( v41 )
              {
                if ( v39 )
                  *v39 = v41;
                return -1;
              }
              return 1;
            }
            v53 = *(_QWORD ***)(a3 + 8);
LABEL_54:
            v40 = v53 + 1;
            *(_QWORD *)(a3 + 8) = v53 + 1;
            v39 = *v53;
            goto LABEL_55;
          }
          v52 = *(__int64 **)(a3 + 8);
LABEL_53:
          v53 = (_QWORD **)(v52 + 1);
          *(_QWORD *)(a3 + 8) = v52 + 1;
          v37 = *v52;
          goto LABEL_54;
        }
        v51 = *(unsigned int **)(a3 + 8);
      }
      v52 = (__int64 *)(v51 + 2);
      *(_QWORD *)(a3 + 8) = v51 + 2;
      v35 = *v51;
      goto LABEL_53;
    case 10LL:
      v28 = *(_DWORD *)a3;
      if ( v28 > 0x2F )
      {
        v29 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v29 + 1;
      }
      else
      {
        v29 = (__int64 *)(*(_QWORD *)(a3 + 16) + v28);
        *(_DWORD *)a3 = v28 + 8;
      }
      return (int)sub_9D40(a1, *v29);
    case 11LL:
      v24 = *(_DWORD *)a3;
      if ( v24 > 0x2F )
      {
        v27 = *(__int64 **)(a3 + 8);
        v26 = (__int64)(v27 + 1);
        *(_QWORD *)(a3 + 8) = v27 + 1;
      }
      else
      {
        v25 = v24;
        v26 = v24 + 8;
        v27 = (__int64 *)(*(_QWORD *)(a3 + 16) + v25);
        *(_DWORD *)a3 = v26;
      }
      if ( (unsigned int)sub_F600(a1, *v27, v26, (__int64)v27, a5) )
        return 1;
      return -1;
    case 17LL:
      v22 = *(_DWORD *)a3;
      if ( v22 > 0x2F )
      {
        v23 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v23 + 1;
      }
      else
      {
        v23 = (__int64 *)(*(_QWORD *)(a3 + 16) + v22);
        *(_DWORD *)a3 = v22 + 8;
      }
      sub_11740(*v23, a2);
      return 1;
    case 19LL:
      v16 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v54 = *(__int64 ***)(a3 + 8);
        v21 = (const __m128i **)(v54 + 1);
        *(_QWORD *)(a3 + 8) = v54 + 1;
        v19 = *v54;
      }
      else
      {
        v17 = *(_QWORD *)(a3 + 16);
        v18 = v16 + 8;
        *(_DWORD *)a3 = v18;
        v19 = *(__int64 **)(v17 + v16);
        if ( (unsigned int)v18 <= 0x2F )
        {
          v20 = v16 + 16;
          v21 = (const __m128i **)(v18 + v17);
          *(_DWORD *)a3 = v20;
          goto LABEL_18;
        }
        v21 = *(const __m128i ***)(a3 + 8);
      }
      v20 = (__int64)(v21 + 1);
      *(_QWORD *)(a3 + 8) = v21 + 1;
LABEL_18:
      if ( !(unsigned __int8)sub_11FA0(v19, *v21, (__int64)v21, v20) )
        return -1;
      return 1;
    case 53LL:
      v12 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v13 = *(__int64 ***)(a3 + 8);
        v14 = (__int64 *)(v13 + 1);
        *(_QWORD *)(a3 + 8) = v13 + 1;
        v15 = *v13;
LABEL_13:
        *(_QWORD *)(a3 + 8) = v14 + 1;
        return sub_FEE0(a1, v15, *v14);
      }
      v55 = *(_QWORD *)(a3 + 16);
      v56 = v12 + 8;
      *(_DWORD *)a3 = v56;
      v15 = *(__int64 **)(v55 + v12);
      if ( (unsigned int)v56 > 0x2F )
      {
        v14 = *(__int64 **)(a3 + 8);
        goto LABEL_13;
      }
      v14 = (__int64 *)(v56 + v55);
      *(_DWORD *)a3 = v12 + 16;
      return sub_FEE0(a1, v15, *v14);
    case 59LL:
      v10 = *(_DWORD *)a3;
      if ( v10 <= 0x2F )
      {
        v11 = (unsigned __int64 **)(*(_QWORD *)(a3 + 16) + v10);
        *(_DWORD *)a3 = v10 + 8;
      }
      else
      {
        v11 = *(unsigned __int64 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v11 + 1;
      }
      return (int)sub_CD60(a1, *v11);
    case 60LL:
      v8 = *(_DWORD *)a3;
      if ( v8 > 0x2F )
      {
        v9 = *(_DWORD ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v9 + 1;
      }
      else
      {
        v9 = (_DWORD **)(*(_QWORD *)(a3 + 16) + v8);
        *(_DWORD *)a3 = v8 + 8;
      }
      **v9 = 0;
      return 1;
    default:
      return 0;
  }
}
