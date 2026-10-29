unsigned __int64 __fastcall sub_228510(int *a1, __int64 *a2, __int64 a3, __int64 *a4, double a5)
{
  bool v7; // zf
  __int64 v8; // rdi
  int v9; // r12d
  __int64 *v10; // r13
  __int64 v11; // rsi
  __int64 v12; // r15
  int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r15
  unsigned __int64 v16; // rax
  int v17; // edi
  __int64 v18; // rcx
  int v19; // edx
  int v20; // r15d
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 tinfo_size; // rax
  int v24; // ecx
  unsigned __int64 v25; // rbx
  int v26; // eax
  unsigned __int64 v27; // rdx
  int v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  __int64 v32; // [rsp+8h] [rbp-60h]
  int v34; // [rsp+1Ch] [rbp-4Ch]
  __int64 v35; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v36; // [rsp+28h] [rbp-40h]

  v7 = *a1 == -1;
  v8 = *a4;
  v9 = *(_DWORD *)(*(_QWORD *)(a3 + 1504) + 80LL);
  v36 = __readfsqword(0x28u);
  v10 = a4;
  v34 = v9;
  if ( v7 && !(_BYTE)v8 )
  {
    v30 = *(_DWORD *)(a3 + 72);
    if ( v30 <= 0x10 )
      v30 = getinf();
    if ( v30 == 176 || v30 == 256 || (unsigned __int8)getinf_flag() )
      return v36 - __readfsqword(0x28u);
    *a1 = v9;
    v9 = *(_DWORD *)(*(_QWORD *)(a3 + 1504) + 80LL);
  }
  v11 = 2;
  v12 = *a2;
  if ( (get_tinfo_property() & 0xF) == 0xB )
  {
    v10 = nullptr;
    v13 = *a1;
  }
  else
  {
    v11 = *v10;
    tinfo_size = get_tinfo_size();
    v13 = *a1;
    if ( tinfo_size != *a1 )
      v10 = nullptr;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a3 + 1496) + 145LL) && v9 > v13 )
  {
    v21 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a3 + 936) + 40LL))(*(_QWORD *)(a3 + 936), v11);
    v22 = *a1;
    if ( v21 == (v12 & -v9) )
    {
      if ( *a2 + v22 > v21 + v9 )
      {
        if ( !under_debugger )
          sub_383060(0xCCA0u, a5);
        goto LABEL_61;
      }
      *a2 = v21;
      *a1 = v9;
      return v36 - __readfsqword(0x28u);
    }
    v31 = sub_228210(a3, v12, v10, v22, a5);
    if ( v31 > 0 && v31 <= v9 )
    {
      *a1 = v31;
      return v36 - __readfsqword(0x28u);
    }
    v13 = *a1;
  }
  v14 = *a2;
  do
  {
    v20 = *(_DWORD *)(*(_QWORD *)(a3 + 1504) + 80LL);
    if ( v13 % v20 )
      v20 = v13;
    if ( v10 )
    {
      v32 = v14;
      v35 = 0;
      copy_tinfo_t();
      v14 = v32;
    }
    else
    {
      v35 = 0;
    }
    v15 = sub_227D30(a3, v14, &v35, v20);
    clear_tinfo_t();
    if ( v13 != -1 )
    {
      v16 = *a2;
      if ( v15 == *a2 )
        goto LABEL_46;
      if ( v13 && v16 >= v15 && v13 + v15 - 1 >= v16 + *a1 - 1 )
      {
        if ( sub_11CA80(v13) )
          goto LABEL_46;
        v16 = *a2;
      }
      if ( v15 >= (__int64)v16 )
        v17 = v13 + v15 - v16;
      else
        v17 = v13 - v15 + v16;
      v18 = *(_QWORD *)(a3 + 1504);
      v19 = 16;
      if ( (*(_BYTE *)(v18 + 50) & 8) == 0 )
        v19 = 2 * *(_DWORD *)(v18 + 80);
      if ( v17 > v19 )
      {
        v24 = 1;
        v25 = v16 & -v34;
        if ( *a1 > 0 )
          v24 = *a1;
        v26 = sub_228210(a3, v25, nullptr, (int)v16 + v24 - (int)v25, a5);
        *a1 = v26;
        v27 = *a2;
        if ( v26 && v27 >= v25 && v26 + v25 - 1 >= v27 )
        {
          *a2 = v25;
          return v36 - __readfsqword(0x28u);
        }
        if ( !under_debugger )
          sub_383060(0xCC96u, a5);
LABEL_61:
        BUG();
      }
      v10 = nullptr;
      v13 = sub_11CA90(v17, a5);
    }
    v14 = *a2;
  }
  while ( *a2 < v15 );
  if ( v13 != -1 )
  {
LABEL_46:
    v29 = sub_228210(a3, v15, v10, v13, a5);
    if ( v13 < v29 )
      v13 = v29;
  }
  *a1 = v13;
  *a2 = v15;
  return v36 - __readfsqword(0x28u);
}

