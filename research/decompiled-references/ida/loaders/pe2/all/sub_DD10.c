unsigned __int64 __fastcall sub_DD10(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v8; // eax
  bool v9; // r12
  char v11; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ebx
  _DWORD *v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rdi
  int v29; // eax
  int v30; // r11d
  unsigned int v31; // eax
  __int64 v32; // rax
  int v33; // edx
  int v34; // ecx
  int v35; // edx
  unsigned int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rsi
  _DWORD *v39; // r15
  __int64 v40; // rax
  unsigned int v41; // r8d
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // rbp
  int v45; // eax
  int v46; // edx
  int v47; // eax
  __int64 v48; // rdx
  _QWORD *v49; // rbx
  __int64 v51; // rax
  char v52; // [rsp-8h] [rbp-88h]
  unsigned int v53; // [rsp+8h] [rbp-78h]
  int v54; // [rsp+18h] [rbp-68h]
  int v55; // [rsp+1Ch] [rbp-64h]
  __int64 v56; // [rsp+28h] [rbp-58h]
  __int128 v57; // [rsp+30h] [rbp-50h]
  unsigned __int64 v58; // [rsp+40h] [rbp-40h]

  v8 = *(_DWORD *)(a1 + 128);
  v9 = *(_DWORD *)(a1 + 132) == v8;
  v58 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 16) = 0;
  v11 = v8 <= 0xFFF && v9;
  v56 = 0;
  v57 = 0;
  qlseek();
  if ( a3 == -1 )
    a3 = qlseek();
  v12 = qlsize() - a3;
  v13 = a4;
  if ( ((v12 | a3) & 0x8000000000000000LL) != 0LL )
  {
    v14 = 0;
    a4 = 0;
  }
  else
  {
    if ( !a4 )
    {
      a4 = 0;
      if ( v11 )
        goto LABEL_19;
      goto LABEL_61;
    }
    if ( (unsigned __int64)a4 <= 0x666666666666666LL && v12 >= 40LL * a4 )
      goto LABEL_11;
    a4 = v12 / 0x28;
    v14 = a4;
  }
  if ( (unsigned int)sub_D140(
                       1u,
                       (__int64)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
                       "Number of sections",
                       v13,
                       v14,
                       ". Do you want to continue with the new value?") != 1 )
    sub_DB80(
      0,
      (__int64)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
      v15,
      v16,
      v17,
      v18,
      v52);
  if ( a4 <= 0 )
  {
LABEL_18:
    if ( v11 )
      goto LABEL_19;
LABEL_61:
    if ( *(_DWORD *)(a1 + 72) != 23126 )
    {
      if ( (unsigned __int16)(*(_WORD *)(a1 + 164) - 10) <= 3u )
      {
LABEL_24:
        v25 = 1;
        if ( a4 > 0 )
          goto LABEL_25;
        v53 = 0;
LABEL_46:
        if ( *(_DWORD *)(a1 + 72) == 23126 )
          *(_DWORD *)(a1 + 152) = v53;
        goto LABEL_48;
      }
      v25 = 512;
LABEL_64:
      if ( a4 > 0 )
      {
LABEL_25:
        v53 = 0;
        v26 = 0;
        v54 = -v25;
        while ( 1 )
        {
          v37 = *(_QWORD *)(a1 + 16);
          v38 = *(_QWORD *)(a1 + 8);
          v39 = (_DWORD *)(v26 + v56);
          v40 = v37 + 1;
          v41 = *(_DWORD *)(v26 + v56 + 20) & v54;
          if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v37 + 1) )
          {
            v55 = *(_DWORD *)(v26 + v56 + 20) & v54;
            v42 = qvector_reserve();
            v37 = *(_QWORD *)(a1 + 16);
            v38 = v42;
            v41 = v55;
            *(_QWORD *)(a1 + 8) = v42;
            v40 = v37 + 1;
          }
          *(_QWORD *)(a1 + 16) = v40;
          v27 = 32 * v37;
          v28 = v38 + v27;
          *(_QWORD *)(v38 + v27) = (unsigned int)v39[3];
          v29 = *(_DWORD *)(a1 + 128);
          if ( !v29 )
            v29 = 1;
          v30 = v39[2];
          if ( !v30 )
            v30 = v39[4];
          v31 = (v29 + v30 - 1) & -v29;
          if ( v31 > v39[4] )
            v31 = v39[4];
          *(_QWORD *)(v38 + v27 + 24) = v31;
          v32 = v39[3] + v31;
          if ( (unsigned __int16)(*(_WORD *)(a1 + 164) - 10) > 3u )
          {
            if ( *(_DWORD *)(a1 + 128) == 4096 || (v33 = *(_DWORD *)(a1 + 132)) == 0 )
            {
              v35 = -512;
              v34 = 511;
            }
            else
            {
              v34 = v33 - 1;
              v35 = -v33;
            }
            v32 = v35 & (unsigned int)(v34 + v32);
          }
          *(_QWORD *)(v28 + 8) = v32;
          *(_QWORD *)(v28 + 16) = v41;
          if ( *(_DWORD *)(a1 + 72) == 23126 )
            *(_QWORD *)(v28 + 16) = v41 + (__int64)(40 - *(unsigned __int16 *)(a1 + 38));
          if ( (**(unsigned int (__fastcall ***)(__int64, _DWORD *))a5)(a5, v39) )
            goto LABEL_58;
          v36 = v39[3] + v39[2];
          if ( v53 >= v36 )
            v36 = v53;
          v26 += 40;
          v53 = v36;
          if ( v26 == 40LL * a4 )
            goto LABEL_46;
        }
      }
LABEL_48:
      if ( !a4 || v11 )
      {
        v43 = qlsize();
        v44 = *(unsigned int *)(a1 + 152);
        if ( (unsigned __int16)(*(_WORD *)(a1 + 164) - 10) > 3u )
        {
          if ( *(_DWORD *)(a1 + 128) == 4096 || (v45 = *(_DWORD *)(a1 + 132)) == 0 )
          {
            v47 = -512;
            v46 = 511;
          }
          else
          {
            v46 = v45 - 1;
            v47 = -v45;
          }
          v44 = v47 & (unsigned int)(v46 + v44);
        }
        v48 = *(_QWORD *)(a1 + 16);
        v49 = *(_QWORD **)(a1 + 8);
        if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v48 + 1) )
        {
          v51 = qvector_reserve();
          *(_QWORD *)(a1 + 8) = v51;
          v48 = *(_QWORD *)(a1 + 16);
          v49 = (_QWORD *)v51;
        }
        memmove(v49 + 4, v49, 32 * v48);
        *v49 = 0;
        v49[1] = v44;
        v49[2] = 0;
        v49[3] = v43;
        ++*(_QWORD *)(a1 + 16);
      }
      goto LABEL_58;
    }
LABEL_19:
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5) )
      goto LABEL_58;
    if ( v11 )
      v25 = *(_DWORD *)(a1 + 132);
    else
      v25 = 512;
    if ( (unsigned __int16)(*(_WORD *)(a1 + 164) - 10) <= 3u || *(_DWORD *)(a1 + 72) == 23126 )
      goto LABEL_24;
    goto LABEL_64;
  }
LABEL_11:
  v19 = 0;
  while ( 1 )
  {
    v21 = v57;
    v22 = v56;
    v23 = v57 + 1;
    if ( *((_QWORD *)&v57 + 1) < (unsigned __int64)(v57 + 1) )
    {
      v24 = qvector_reserve();
      v21 = v57;
      v56 = v24;
      v22 = v24;
      v23 = v57 + 1;
    }
    *(_QWORD *)&v57 = v23;
    v20 = (_DWORD *)(v22 + 40 * v21);
    if ( qlread() != 40 )
      break;
    if ( v20[3] == v20[5] )
    {
      ++v19;
      v11 &= v20[4] >= v20[2];
      if ( v19 >= a4 )
        goto LABEL_18;
    }
    else
    {
      ++v19;
      v11 = 0;
      if ( v19 >= a4 )
        goto LABEL_18;
    }
  }
LABEL_58:
  if ( v56 )
    qfree();
  return v58 - __readfsqword(0x28u);
}

