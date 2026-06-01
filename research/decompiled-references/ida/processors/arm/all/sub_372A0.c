unsigned __int64 __fastcall sub_372A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  char v9; // cl
  __int64 v10; // r15
  unsigned int v11; // ebx
  bool v12; // al
  char v13; // r13
  unsigned __int8 v14; // al
  unsigned __int8 v15; // al
  __int64 v16; // rdi
  int v17; // eax
  unsigned int v18; // r13d
  char v19; // r8
  unsigned int v20; // r13d
  __int64 v21; // rcx
  __int16 v22; // ax
  unsigned int v23; // eax
  unsigned int v24; // r13d
  unsigned __int8 v25; // al
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 i; // r13
  unsigned __int64 dtype_size; // rax
  unsigned __int64 v31; // rax
  __int16 v32; // ax
  int v33; // ecx
  __int64 v34; // rax
  int v35; // edi
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  bool v38; // cc
  int v39; // eax
  int v40; // eax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int8 v44; // [rsp+0h] [rbp-98h]
  int v45; // [rsp+8h] [rbp-90h]
  unsigned int v46; // [rsp+8h] [rbp-90h]
  unsigned __int8 v47; // [rsp+8h] [rbp-90h]
  unsigned int v48; // [rsp+8h] [rbp-90h]
  char v49; // [rsp+Ch] [rbp-8Ch]
  unsigned int v50; // [rsp+Ch] [rbp-8Ch]
  _QWORD v51[3]; // [rsp+10h] [rbp-88h] BYREF
  int v52; // [rsp+28h] [rbp-70h]
  char v53; // [rsp+2Ch] [rbp-6Ch]
  __int64 v54; // [rsp+30h] [rbp-68h] BYREF
  __int64 v55; // [rsp+38h] [rbp-60h]
  __int128 v56; // [rsp+40h] [rbp-58h]
  unsigned __int64 v57; // [rsp+58h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a3 + 41) )
  {
    if ( (*(_BYTE *)(a3 + 34) & 4) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 16);
      v6 = *(unsigned __int16 *)(a3 + 24);
      v7 = 0;
      v8 = *(_DWORD *)(v5 + 104);
      if ( v6 >= v8 && v6 < *(_DWORD *)(v5 + 108) )
        v7 = *(_DWORD *)(*(_QWORD *)(v5 + 112) + 16LL * (v6 - v8) + 8);
    }
    else
    {
      v32 = getinf(3);
      v5 = *(_QWORD *)(a1 + 16);
      v7 = 0;
      v33 = *(unsigned __int16 *)(a3 + 24);
      v34 = v32 & 0x1006;
      v35 = *(_DWORD *)(v5 + 104);
      if ( v35 <= v33 && v33 < *(_DWORD *)(v5 + 108) )
        v7 = *(_DWORD *)(*(_QWORD *)(v5 + 112) + 16LL * (v33 - v35) + 8);
      v44 = 2;
      v9 = 0;
      if ( v34 != 4098 )
        goto LABEL_6;
    }
    v44 = 7;
    v9 = 1;
LABEL_6:
    v51[0] = v5;
    v10 = a3 + 40;
    v11 = 0;
    v51[1] = a2;
    v51[2] = a3;
    v52 = v7;
    v53 = v9;
    while ( 1 )
    {
      switch ( *(_BYTE *)(v10 + 1) )
      {
        case 0:
          return v57 - __readfsqword(0x28u);
        case 1:
          v17 = *(_DWORD *)(a3 + 28);
          v54 = v5;
          v18 = *(unsigned __int8 *)(v10 + 5);
          v56 = 0;
          v55 = 0;
          v45 = *(unsigned __int16 *)(v10 + 6);
          v49 = (v17 & 0x40) != 0 ? 3 : 0;
          sub_3C4E0(&v54, *(unsigned __int16 *)(v10 + 6), v10, 1);
          v19 = v49;
          if ( (unsigned int)(v45 - 61) <= 0x1F )
          {
            dtype_size = get_dtype_size();
            v19 = v49;
            if ( dtype_size <= 7 )
              v18 = 7;
          }
          else if ( (unsigned int)(v45 - 45) <= 0xF )
          {
            v36 = get_dtype_size();
            v19 = v49;
            if ( v36 <= 0xF )
              v18 = 8;
          }
          sub_36DB0((__int64)v51, v11, (__int64)&v54, v18, v19);
          if ( !v55 )
            goto LABEL_9;
          *(_QWORD *)&v56 = 0;
          ++v11;
          v10 += 40;
          qfree(v55);
          if ( v11 != 8 )
            continue;
          return v57 - __readfsqword(0x28u);
        case 3:
        case 4:
          v12 = (*(_BYTE *)(a3 + 28) & 0xA0) != 0;
          v54 = v5;
          v55 = 0;
          v13 = v12 + 2;
          v56 = 0;
          v14 = sub_3A600(&v54, v10, 0);
          sub_36DB0((__int64)v51, v11, (__int64)&v54, v14, v13);
          if ( v55 )
          {
            *(_QWORD *)&v56 = 0;
            qfree(v55);
          }
          if ( *(_BYTE *)(v10 + 1) != 3 )
            goto LABEL_9;
          v54 = v5;
          v55 = 0;
          v56 = 0;
          v15 = sub_3A600(&v54, v10, 1);
          sub_36DB0((__int64)v51, v11, (__int64)&v54, v15, v13);
          v16 = v55;
          if ( !v55 )
            goto LABEL_9;
          goto LABEL_43;
        case 8:
          v24 = *(unsigned __int16 *)(v10 + 6);
          v25 = *(_BYTE *)(v10 + 5);
          v54 = v5;
          v47 = v25;
          v55 = 0;
          v56 = 0;
          sub_3C4E0(&v54, v24, v10, 1);
          v26 = v47;
          if ( v24 - 61 <= 0x1F )
          {
            v31 = get_dtype_size();
            v26 = v47;
            if ( v31 <= 7 )
              v26 = 7;
          }
          else if ( v24 - 45 <= 0xF )
          {
            v37 = get_dtype_size();
            v26 = v47;
            if ( v37 <= 0xF )
              v26 = 8;
          }
          sub_36DB0((__int64)v51, v11, (__int64)&v54, v26, 0);
          if ( v55 )
          {
            *(_QWORD *)&v56 = 0;
            qfree(v55);
          }
          if ( *(_BYTE *)(v10 + 33) == 4 || (*(_BYTE *)(a3 + 28) & 8) == 0 )
            goto LABEL_9;
          v27 = *(unsigned __int8 *)(v10 + 32);
          v54 = v5;
          v48 = v27;
          v55 = 0;
          v56 = 0;
          sub_3C4E0(&v54, v27, v10, 1);
          if ( v48 - 61 <= 0x1F )
          {
            v42 = get_dtype_size();
            v28 = 7;
            if ( v42 > 7 )
LABEL_41:
              v28 = 0;
          }
          else
          {
            if ( v48 - 45 > 0xF )
              goto LABEL_41;
            v28 = 8 * (unsigned int)((unsigned __int64)get_dtype_size() <= 0xF);
          }
          sub_36DB0((__int64)v51, v11, (__int64)&v54, v28, 2);
          v16 = v55;
          if ( v55 )
            goto LABEL_43;
          goto LABEL_9;
        case 9:
          for ( i = 0; i != 17; ++i )
          {
            if ( (*(_QWORD *)(v10 + 24) & (1 << i)) != 0 )
            {
              v54 = v5;
              v55 = 0;
              v56 = 0;
              sub_3C4E0(&v54, (unsigned int)i, v10, 1);
              sub_36DB0((__int64)v51, v11, (__int64)&v54, v44, 0);
              if ( v55 )
              {
                *(_QWORD *)&v56 = 0;
                qfree(v55);
              }
            }
          }
          goto LABEL_9;
        case 0xA:
          if ( (unsigned __int16)(*(_WORD *)(a3 + 24) - 83) <= 1u )
            goto LABEL_9;
          v20 = *(unsigned __int16 *)(v10 + 6);
          v54 = v5;
          v56 = 0;
          v55 = 0;
          sub_3C4E0(&v54, v20, v10, 1);
          v46 = v44;
          if ( v20 - 61 <= 0x1F )
          {
            v43 = get_dtype_size();
            v21 = 7;
            if ( v43 > 7 )
              goto LABEL_24;
          }
          else if ( v20 - 45 > 0xF || (v41 = get_dtype_size(), v21 = 8, v41 > 0xF) )
          {
LABEL_24:
            v21 = v44;
          }
          sub_36DB0((__int64)v51, v11, (__int64)&v54, v21, 0);
          if ( v55 )
          {
            *(_QWORD *)&v56 = 0;
            qfree(v55);
          }
          v22 = *(_WORD *)(a3 + 24);
          if ( (unsigned __int16)(v22 - 167) <= 1u || (unsigned __int16)(v22 - 93) <= 1u )
          {
            v23 = *(char *)(v10 + 32);
            v54 = v5;
            v50 = v23;
            v55 = 0;
            v56 = 0;
            sub_3C4E0(&v54, v23, v10, 1);
            if ( v50 - 61 <= 0x1F )
            {
              v38 = (unsigned __int64)get_dtype_size() <= 7;
              v39 = 7;
              if ( !v38 )
                v39 = v44;
              v46 = v39;
            }
            else if ( v50 - 45 <= 0xF )
            {
              v38 = (unsigned __int64)get_dtype_size() <= 0xF;
              v40 = 8;
              if ( !v38 )
                v40 = v44;
              v46 = v40;
            }
            sub_36DB0((__int64)v51, v11, (__int64)&v54, v46, 0);
            v16 = v55;
            if ( v55 )
            {
LABEL_43:
              *(_QWORD *)&v56 = 0;
              qfree(v16);
            }
          }
LABEL_9:
          ++v11;
          v10 += 40;
          if ( v11 == 8 )
            return v57 - __readfsqword(0x28u);
          break;
        case 0xC:
          sub_36F40((__int64)v51, v11, v10);
          goto LABEL_9;
        default:
          goto LABEL_9;
      }
    }
  }
  return v57 - __readfsqword(0x28u);
}
