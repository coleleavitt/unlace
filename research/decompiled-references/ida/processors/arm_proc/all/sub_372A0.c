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
  int v16; // eax
  unsigned int v17; // r13d
  char v18; // r8
  unsigned int v19; // r13d
  __int64 v20; // rcx
  __int16 v21; // ax
  unsigned int v22; // eax
  unsigned int v23; // r13d
  unsigned __int8 v24; // al
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 i; // r13
  unsigned __int64 dtype_size; // rax
  unsigned __int64 v30; // rax
  __int16 v31; // ax
  int v32; // ecx
  __int64 v33; // rax
  int v34; // edi
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  bool v37; // cc
  int v38; // eax
  int v39; // eax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int8 v43; // [rsp+0h] [rbp-98h]
  int v44; // [rsp+8h] [rbp-90h]
  unsigned int v45; // [rsp+8h] [rbp-90h]
  unsigned __int8 v46; // [rsp+8h] [rbp-90h]
  unsigned int v47; // [rsp+8h] [rbp-90h]
  char v48; // [rsp+Ch] [rbp-8Ch]
  unsigned int v49; // [rsp+Ch] [rbp-8Ch]
  _QWORD v50[3]; // [rsp+10h] [rbp-88h] BYREF
  int v51; // [rsp+28h] [rbp-70h]
  char v52; // [rsp+2Ch] [rbp-6Ch]
  __int64 v53; // [rsp+30h] [rbp-68h] BYREF
  __int64 v54; // [rsp+38h] [rbp-60h]
  __int128 v55; // [rsp+40h] [rbp-58h]
  unsigned __int64 v56; // [rsp+58h] [rbp-40h]

  v56 = __readfsqword(0x28u);
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
      v31 = getinf();
      v5 = *(_QWORD *)(a1 + 16);
      v7 = 0;
      v32 = *(unsigned __int16 *)(a3 + 24);
      v33 = v31 & 0x1006;
      v34 = *(_DWORD *)(v5 + 104);
      if ( v34 <= v32 && v32 < *(_DWORD *)(v5 + 108) )
        v7 = *(_DWORD *)(*(_QWORD *)(v5 + 112) + 16LL * (v32 - v34) + 8);
      v43 = 2;
      v9 = 0;
      if ( v33 != 4098 )
        goto LABEL_6;
    }
    v43 = 7;
    v9 = 1;
LABEL_6:
    v50[0] = v5;
    v10 = a3 + 40;
    v11 = 0;
    v50[1] = a2;
    v50[2] = a3;
    v51 = v7;
    v52 = v9;
    while ( 1 )
    {
      switch ( *(_BYTE *)(v10 + 1) )
      {
        case 0:
          return v56 - __readfsqword(0x28u);
        case 1:
          v16 = *(_DWORD *)(a3 + 28);
          v53 = v5;
          v17 = *(unsigned __int8 *)(v10 + 5);
          v55 = 0;
          v54 = 0;
          v44 = *(unsigned __int16 *)(v10 + 6);
          v48 = (v16 & 0x40) != 0 ? 3 : 0;
          sub_3C4E0(&v53, *(unsigned __int16 *)(v10 + 6), v10, 1);
          v18 = v48;
          if ( (unsigned int)(v44 - 61) <= 0x1F )
          {
            dtype_size = get_dtype_size();
            v18 = v48;
            if ( dtype_size <= 7 )
              v17 = 7;
          }
          else if ( (unsigned int)(v44 - 45) <= 0xF )
          {
            v35 = get_dtype_size();
            v18 = v48;
            if ( v35 <= 0xF )
              v17 = 8;
          }
          sub_36DB0((__int64)v50, v11, (__int64)&v53, v17, v18);
          if ( !v54 )
            goto LABEL_9;
          *(_QWORD *)&v55 = 0;
          ++v11;
          v10 += 40;
          qfree();
          if ( v11 != 8 )
            continue;
          return v56 - __readfsqword(0x28u);
        case 3:
        case 4:
          v12 = (*(_BYTE *)(a3 + 28) & 0xA0) != 0;
          v53 = v5;
          v54 = 0;
          v13 = v12 + 2;
          v55 = 0;
          v14 = sub_3A600(&v53, v10, 0);
          sub_36DB0((__int64)v50, v11, (__int64)&v53, v14, v13);
          if ( v54 )
          {
            *(_QWORD *)&v55 = 0;
            qfree();
          }
          if ( *(_BYTE *)(v10 + 1) != 3 )
            goto LABEL_9;
          v53 = v5;
          v54 = 0;
          v55 = 0;
          v15 = sub_3A600(&v53, v10, 1);
          sub_36DB0((__int64)v50, v11, (__int64)&v53, v15, v13);
          if ( !v54 )
            goto LABEL_9;
          goto LABEL_43;
        case 8:
          v23 = *(unsigned __int16 *)(v10 + 6);
          v24 = *(_BYTE *)(v10 + 5);
          v53 = v5;
          v46 = v24;
          v54 = 0;
          v55 = 0;
          sub_3C4E0(&v53, v23, v10, 1);
          v25 = v46;
          if ( v23 - 61 <= 0x1F )
          {
            v30 = get_dtype_size();
            v25 = v46;
            if ( v30 <= 7 )
              v25 = 7;
          }
          else if ( v23 - 45 <= 0xF )
          {
            v36 = get_dtype_size();
            v25 = v46;
            if ( v36 <= 0xF )
              v25 = 8;
          }
          sub_36DB0((__int64)v50, v11, (__int64)&v53, v25, 0);
          if ( v54 )
          {
            *(_QWORD *)&v55 = 0;
            qfree();
          }
          if ( *(_BYTE *)(v10 + 33) == 4 || (*(_BYTE *)(a3 + 28) & 8) == 0 )
            goto LABEL_9;
          v26 = *(unsigned __int8 *)(v10 + 32);
          v53 = v5;
          v47 = v26;
          v54 = 0;
          v55 = 0;
          sub_3C4E0(&v53, v26, v10, 1);
          if ( v47 - 61 <= 0x1F )
          {
            v41 = get_dtype_size();
            v27 = 7;
            if ( v41 > 7 )
LABEL_41:
              v27 = 0;
          }
          else
          {
            if ( v47 - 45 > 0xF )
              goto LABEL_41;
            v27 = 8 * (unsigned int)((unsigned __int64)get_dtype_size() <= 0xF);
          }
          sub_36DB0((__int64)v50, v11, (__int64)&v53, v27, 2);
          if ( v54 )
            goto LABEL_43;
          goto LABEL_9;
        case 9:
          for ( i = 0; i != 17; ++i )
          {
            if ( (*(_QWORD *)(v10 + 24) & (1 << i)) != 0 )
            {
              v53 = v5;
              v54 = 0;
              v55 = 0;
              sub_3C4E0(&v53, (unsigned int)i, v10, 1);
              sub_36DB0((__int64)v50, v11, (__int64)&v53, v43, 0);
              if ( v54 )
              {
                *(_QWORD *)&v55 = 0;
                qfree();
              }
            }
          }
          goto LABEL_9;
        case 0xA:
          if ( (unsigned __int16)(*(_WORD *)(a3 + 24) - 83) <= 1u )
            goto LABEL_9;
          v19 = *(unsigned __int16 *)(v10 + 6);
          v53 = v5;
          v55 = 0;
          v54 = 0;
          sub_3C4E0(&v53, v19, v10, 1);
          v45 = v43;
          if ( v19 - 61 <= 0x1F )
          {
            v42 = get_dtype_size();
            v20 = 7;
            if ( v42 > 7 )
              goto LABEL_24;
          }
          else if ( v19 - 45 > 0xF || (v40 = get_dtype_size(), v20 = 8, v40 > 0xF) )
          {
LABEL_24:
            v20 = v43;
          }
          sub_36DB0((__int64)v50, v11, (__int64)&v53, v20, 0);
          if ( v54 )
          {
            *(_QWORD *)&v55 = 0;
            qfree();
          }
          v21 = *(_WORD *)(a3 + 24);
          if ( (unsigned __int16)(v21 - 167) <= 1u || (unsigned __int16)(v21 - 93) <= 1u )
          {
            v22 = *(char *)(v10 + 32);
            v53 = v5;
            v49 = v22;
            v54 = 0;
            v55 = 0;
            sub_3C4E0(&v53, v22, v10, 1);
            if ( v49 - 61 <= 0x1F )
            {
              v37 = (unsigned __int64)get_dtype_size() <= 7;
              v38 = 7;
              if ( !v37 )
                v38 = v43;
              v45 = v38;
            }
            else if ( v49 - 45 <= 0xF )
            {
              v37 = (unsigned __int64)get_dtype_size() <= 0xF;
              v39 = 8;
              if ( !v37 )
                v39 = v43;
              v45 = v39;
            }
            sub_36DB0((__int64)v50, v11, (__int64)&v53, v45, 0);
            if ( v54 )
            {
LABEL_43:
              *(_QWORD *)&v55 = 0;
              qfree();
            }
          }
LABEL_9:
          ++v11;
          v10 += 40;
          if ( v11 == 8 )
            return v56 - __readfsqword(0x28u);
          break;
        case 0xC:
          sub_36F40((__int64)v50, v11, v10);
          goto LABEL_9;
        default:
          goto LABEL_9;
      }
    }
  }
  return v56 - __readfsqword(0x28u);
}

