__int64 __fastcall sub_3D9C0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  __int64 result; // rax
  char v6; // r12
  __int64 v7; // rax
  __int64 v8; // r15
  _DWORD *v9; // r14
  __int64 v10; // rbx
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  __int64 v13; // r10
  __int64 v14; // rsi
  int v15; // eax
  int v16; // edx
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r10
  __int64 v20; // rsi
  __int64 v21; // r9
  unsigned __int64 v22; // rdx
  __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  size_t v25; // r10
  __int64 v26; // r9
  size_t v27; // r11
  __int64 v28; // rsi
  __int64 v29; // r9
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // r10
  __int64 v33; // rbp
  __int64 v34; // rax
  unsigned __int8 v35; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v36; // [rsp+10h] [rbp-98h]
  __int64 v37; // [rsp+10h] [rbp-98h]
  __int64 v38; // [rsp+10h] [rbp-98h]
  unsigned __int64 v39; // [rsp+10h] [rbp-98h]
  unsigned __int64 v40; // [rsp+10h] [rbp-98h]
  __int64 v41; // [rsp+18h] [rbp-90h]
  __int64 v42; // [rsp+18h] [rbp-90h]
  __int64 v43; // [rsp+18h] [rbp-90h]
  __int64 v44; // [rsp+18h] [rbp-90h]
  size_t v45; // [rsp+18h] [rbp-90h]
  __int64 v46; // [rsp+20h] [rbp-88h]
  __int64 v47; // [rsp+20h] [rbp-88h]
  __int64 v48; // [rsp+20h] [rbp-88h]
  size_t v49; // [rsp+20h] [rbp-88h]
  __int64 v50; // [rsp+28h] [rbp-80h]
  __int64 v51; // [rsp+30h] [rbp-78h] BYREF
  __int128 v52; // [rsp+38h] [rbp-70h]
  void *src; // [rsp+50h] [rbp-58h] BYREF
  __int128 v54; // [rsp+58h] [rbp-50h]
  unsigned __int64 v55; // [rsp+68h] [rbp-40h]

  v3 = a3;
  v55 = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  v6 = sub_3B3C0((__m128i *)a1, a2, a3);
  if ( v6 )
  {
    v52 = 0;
    v51 = qvector_reserve();
    *(_QWORD *)&v52 = 6;
    *(_BYTE *)(v51 + 5) = 0;
    v7 = v51;
    *(_DWORD *)v51 = 1852785526;
    *(_BYTE *)(v7 + 4) = 116;
  }
  else
  {
    if ( *(_DWORD *)a2 != -1 && !(unsigned __int8)sub_3D8B0(a1) )
      return 0;
    v3 = 1;
    v51 = 0;
    v52 = 0;
  }
  v8 = a2;
  v9 = (_DWORD *)a2;
  v10 = 0;
  if ( !v6 )
    goto LABEL_10;
  v11 = v52;
  if ( !(_QWORD)v52 )
  {
LABEL_38:
    v14 = v51;
    v12 = 2;
    v13 = 1;
    if ( *((_QWORD *)&v52 + 1) >= 2u )
      goto LABEL_9;
LABEL_39:
    v46 = v11;
    v41 = v13;
    v36 = v12;
    v51 = qvector_reserve();
    v11 = v46;
    v14 = v51;
    v13 = v41;
    v12 = v36;
    goto LABEL_9;
  }
  while ( 2 )
  {
    v12 = v11 + 1;
    v13 = v11;
    v14 = v51;
    --v11;
    if ( *((_QWORD *)&v52 + 1) < v12 )
      goto LABEL_39;
LABEL_9:
    *(_QWORD *)&v52 = v12;
    *(_BYTE *)(v14 + v13) = 0;
    *(_BYTE *)(v51 + v11) = 59;
    while ( 1 )
    {
LABEL_10:
      v15 = v9[1];
      v16 = v9[2];
      if ( v15 )
      {
        if ( v15 != 1 )
        {
          if ( !under_debugger )
            interr();
          BUG();
        }
        if ( !v16 )
        {
          v17 = v52;
          if ( (_QWORD)v52 )
          {
            v18 = v52 + 1;
            v19 = v52;
            v20 = v51;
            v17 = v52 - 1;
            if ( *((_QWORD *)&v52 + 1) >= (unsigned __int64)(v52 + 1) )
            {
LABEL_15:
              *(_QWORD *)&v52 = v18;
              *(_BYTE *)(v20 + v19) = 0;
              *(_BYTE *)(v51 + v17) = 99;
              goto LABEL_16;
            }
          }
          else
          {
            v20 = v51;
            v18 = 2;
            v19 = 1;
            if ( *((_QWORD *)&v52 + 1) >= 2u )
              goto LABEL_15;
          }
          v47 = v17;
          v42 = v19;
          v37 = v18;
          v51 = qvector_reserve();
          v17 = v47;
          v20 = v51;
          v19 = v42;
          v18 = v37;
          goto LABEL_15;
        }
        goto LABEL_44;
      }
      if ( !v16 )
      {
        v29 = v52;
        if ( (_QWORD)v52 )
        {
          v31 = v52 + 1;
          v32 = v52;
          v30 = v51;
          v29 = v52 - 1;
          if ( *((_QWORD *)&v52 + 1) >= (unsigned __int64)(v52 + 1) )
            goto LABEL_43;
        }
        else
        {
          v30 = v51;
          v31 = 2;
          v32 = 1;
          if ( *((_QWORD *)&v52 + 1) >= 2u )
          {
LABEL_43:
            *(_QWORD *)&v52 = v31;
            *(_BYTE *)(v30 + v32) = 0;
            *(_BYTE *)(v51 + v29) = 115;
            goto LABEL_16;
          }
        }
        v48 = v32;
        v43 = v29;
        v38 = v31;
        v51 = qvector_reserve();
        v32 = v48;
        v30 = v51;
        v29 = v43;
        v31 = v38;
        goto LABEL_43;
      }
LABEL_44:
      sub_1A3E0(&v51);
LABEL_16:
      if ( v6 )
        break;
      ++v10;
      v9 += 4;
      if ( v3 == v10 )
        goto LABEL_18;
    }
    if ( *v9 != -1 )
    {
      v21 = v52;
      v22 = 2;
      if ( (_QWORD)v52 )
      {
        v22 = v52 + 1;
        v21 = v52 - 1;
      }
      v23 = v51;
      if ( *((_QWORD *)&v52 + 1) < v22 )
      {
        v44 = v21;
        v39 = v22;
        v51 = qvector_reserve();
        v21 = v44;
        v23 = v51;
        v22 = v39;
      }
      *(_QWORD *)&v52 = v22;
      *(_BYTE *)(v23 + v21) = 58;
      *(_BYTE *)(v51 + v21 + 1) = 0;
      src = nullptr;
      v54 = 0;
      sub_F710((__int64 *)&src);
      v24 = v54;
      if ( (_QWORD)v54 )
      {
        v25 = v54 - 1;
        if ( (_QWORD)v54 != 1 )
        {
          v26 = v52;
          v27 = v54 - 1;
          if ( (_QWORD)v52 )
          {
            v26 = v52 - 1;
            v27 = v25 + v52 - 1;
            v24 = v54 + v52 - 1;
          }
          v28 = v51;
          if ( *((_QWORD *)&v52 + 1) < v24 )
          {
            v50 = v26;
            v49 = v54 - 1;
            v45 = v27;
            v40 = v24;
            v51 = qvector_reserve();
            v26 = v50;
            v28 = v51;
            v25 = v49;
            v27 = v45;
            v24 = v40;
          }
          *(_QWORD *)&v52 = v24;
          *(_BYTE *)(v28 + v27) = 0;
          memcpy((void *)(v26 + v51), src, v25);
        }
      }
      if ( src )
      {
        *(_QWORD *)&v54 = 0;
        qfree();
      }
    }
    ++v10;
    v9 += 4;
    if ( v3 != v10 )
    {
      v11 = v52;
      if ( (_QWORD)v52 )
        continue;
      goto LABEL_38;
    }
    break;
  }
LABEL_18:
  if ( (unsigned int)sub_39C70(a1, &v51) != 1
    || (unsigned int)sub_39BC0(a1) == 1 && *(_QWORD *)(a1 + 32) && **(_BYTE **)(a1 + 24) == 69 )
  {
    result = 0;
  }
  else
  {
    v33 = 16 * v3;
    v34 = a2 + v33;
    if ( (v33 & 0x10) == 0 || (v8 = a2 + 16, *(_BYTE *)(a2 + 12) = 1, v34 != a2 + 16) )
    {
      do
      {
        *(_BYTE *)(v8 + 12) = 1;
        v8 += 32;
        *(_BYTE *)(v8 - 4) = 1;
      }
      while ( v34 != v8 );
    }
    result = 1;
  }
  if ( v51 )
  {
    v35 = result;
    *(_QWORD *)&v52 = 0;
    qfree();
    return v35;
  }
  return result;
}

