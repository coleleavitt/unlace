unsigned __int64 __fastcall sub_354A0(__int64 a1, __int64 a2, const char *a3, int a4, __int64 a5)
{
  __int64 v7; // rbx
  unsigned int v8; // eax
  bool v9; // r12
  const char *v10; // rsi
  char v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ebx
  const char *v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 (*v24)(); // rax
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
  __int64 (*v51)(); // rax
  __int64 v52; // rax
  char v53; // [rsp-8h] [rbp-88h]
  unsigned int v54; // [rsp+8h] [rbp-78h]
  int v55; // [rsp+18h] [rbp-68h]
  int v56; // [rsp+1Ch] [rbp-64h]
  __int64 v57; // [rsp+28h] [rbp-58h]
  __int128 v58; // [rsp+30h] [rbp-50h]
  unsigned __int64 v59; // [rsp+40h] [rbp-40h]

  v7 = (__int64)a3;
  v8 = *(_DWORD *)(a1 + 128);
  v9 = *(_DWORD *)(a1 + 132) == v8;
  v10 = a3;
  v59 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 16) = 0;
  v12 = v8 <= 0xFFF && v9;
  v57 = 0;
  v58 = 0;
  qlseek();
  if ( v7 == -1 )
  {
    v10 = nullptr;
    v7 = qlseek();
  }
  v13 = qlsize() - v7;
  if ( ((v13 | v7) & 0x8000000000000000LL) != 0LL )
  {
    a4 = 0;
  }
  else
  {
    if ( !a4 )
    {
      a4 = 0;
      if ( v12 )
      {
LABEL_19:
        v24 = *(__int64 (**)())(*(_QWORD *)a5 + 8LL);
        if ( v24 != sub_344F0 && ((unsigned int (__fastcall *)(__int64, const char *))v24)(a5, v10) )
          goto LABEL_57;
        v25 = *(_DWORD *)(a1 + 132);
LABEL_21:
        if ( (unsigned __int16)(*(_WORD *)(a1 + 164) - 10) <= 3u || *(_DWORD *)(a1 + 72) == 23126 )
          goto LABEL_22;
LABEL_63:
        if ( a4 > 0 )
        {
LABEL_24:
          v54 = 0;
          v26 = 0;
          v55 = -v25;
          while ( 1 )
          {
            v37 = *(_QWORD *)(a1 + 16);
            v38 = *(_QWORD *)(a1 + 8);
            v39 = (_DWORD *)(v26 + v57);
            v40 = v37 + 1;
            v41 = *(_DWORD *)(v26 + v57 + 20) & v55;
            if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v37 + 1) )
            {
              v56 = *(_DWORD *)(v26 + v57 + 20) & v55;
              v42 = qvector_reserve();
              v37 = *(_QWORD *)(a1 + 16);
              v38 = v42;
              v41 = v56;
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
              goto LABEL_57;
            v36 = v39[3] + v39[2];
            if ( v54 >= v36 )
              v36 = v54;
            v26 += 40;
            v54 = v36;
            if ( v26 == 40LL * a4 )
              goto LABEL_45;
          }
        }
LABEL_47:
        if ( !a4 || v12 )
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
            v52 = qvector_reserve();
            *(_QWORD *)(a1 + 8) = v52;
            v48 = *(_QWORD *)(a1 + 16);
            v49 = (_QWORD *)v52;
          }
          memmove(v49 + 4, v49, 32 * v48);
          *v49 = 0;
          v49[1] = v44;
          v49[2] = 0;
          v49[3] = v43;
          ++*(_QWORD *)(a1 + 16);
        }
        goto LABEL_57;
      }
LABEL_60:
      if ( *(_DWORD *)(a1 + 72) == 23126 )
      {
        v51 = *(__int64 (**)())(*(_QWORD *)a5 + 8LL);
        if ( v51 != sub_344F0 )
        {
          if ( ((unsigned int (__fastcall *)(__int64, const char *))v51)(a5, v10) )
            goto LABEL_57;
          v25 = 512;
          goto LABEL_21;
        }
      }
      else if ( (unsigned __int16)(*(_WORD *)(a1 + 164) - 10) > 3u )
      {
        v25 = 512;
        goto LABEL_63;
      }
LABEL_22:
      if ( a4 > 0 )
      {
        v25 = 1;
        goto LABEL_24;
      }
      v54 = 0;
LABEL_45:
      if ( *(_DWORD *)(a1 + 72) == 23126 )
        *(_DWORD *)(a1 + 152) = v54;
      goto LABEL_47;
    }
    if ( (unsigned __int64)a4 <= 0x666666666666666LL && v13 >= 40LL * a4 )
      goto LABEL_11;
    a4 = v13 / 0x28;
  }
  v10 = "AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s";
  if ( (unsigned int)sub_ECA0() != 1 )
    sub_353F0(
      0,
      (__int64)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
      v14,
      v15,
      v16,
      v17,
      v53);
  if ( a4 <= 0 )
  {
LABEL_18:
    if ( v12 )
      goto LABEL_19;
    goto LABEL_60;
  }
LABEL_11:
  v18 = 0;
  while ( 1 )
  {
    v20 = v58;
    v21 = v57;
    v22 = v58 + 1;
    if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v58 + 1) )
    {
      v23 = qvector_reserve();
      v20 = v58;
      v57 = v23;
      v21 = v23;
      v22 = v58 + 1;
    }
    *(_QWORD *)&v58 = v22;
    v19 = (const char *)(v21 + 40 * v20);
    v10 = v19;
    if ( qlread() != 40 )
      break;
    if ( *((_DWORD *)v19 + 3) == *((_DWORD *)v19 + 5) )
    {
      ++v18;
      v12 &= *((_DWORD *)v19 + 4) >= *((_DWORD *)v19 + 2);
      if ( v18 >= a4 )
        goto LABEL_18;
    }
    else
    {
      ++v18;
      v12 = 0;
      if ( v18 >= a4 )
        goto LABEL_18;
    }
  }
LABEL_57:
  if ( v57 )
    qfree();
  return v59 - __readfsqword(0x28u);
}

