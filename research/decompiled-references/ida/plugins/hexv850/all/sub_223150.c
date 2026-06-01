unsigned __int64 __fastcall sub_223150(int *a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  bool v6; // zf
  __int64 v7; // rdi
  int v8; // r12d
  __int64 *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // r15
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  int v16; // edi
  __int64 v17; // rcx
  int v18; // edx
  int v19; // r15d
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 tinfo_size; // rax
  int v23; // ecx
  unsigned __int64 v24; // rbx
  int v25; // eax
  unsigned __int64 v26; // rdx
  int v28; // eax
  unsigned int v29; // eax
  int v30; // eax
  __int64 v31; // [rsp+8h] [rbp-60h]
  int v33; // [rsp+1Ch] [rbp-4Ch]
  __int64 v34; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v35; // [rsp+28h] [rbp-40h]

  v6 = *a1 == -1;
  v7 = *a4;
  v8 = *(_DWORD *)(*(_QWORD *)(a3 + 1504) + 80LL);
  v35 = __readfsqword(0x28u);
  v9 = a4;
  v33 = v8;
  if ( v6 && !(_BYTE)v7 )
  {
    v29 = *(_DWORD *)(a3 + 72);
    if ( v29 <= 0x10 )
      v29 = getinf();
    if ( v29 == 176 || v29 == 256 || (unsigned __int8)getinf_flag() )
      return v35 - __readfsqword(0x28u);
    *a1 = v8;
    v8 = *(_DWORD *)(*(_QWORD *)(a3 + 1504) + 80LL);
  }
  v10 = 2;
  v11 = *a2;
  if ( (get_tinfo_property() & 0xF) == 0xB )
  {
    v9 = nullptr;
    v12 = *a1;
  }
  else
  {
    v10 = *v9;
    tinfo_size = get_tinfo_size();
    v12 = *a1;
    if ( tinfo_size != *a1 )
      v9 = nullptr;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a3 + 1496) + 145LL) && v8 > v12 )
  {
    v20 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a3 + 936) + 40LL))(*(_QWORD *)(a3 + 936), v10);
    v21 = *a1;
    if ( v20 == (v11 & -v8) )
    {
      if ( *a2 + v21 > v20 + v8 )
      {
        if ( !under_debugger )
          sub_37CFE0(52384);
        goto LABEL_61;
      }
      *a2 = v20;
      *a1 = v8;
      return v35 - __readfsqword(0x28u);
    }
    v30 = sub_222E50(a3, v11, v9, v21);
    if ( v30 > 0 && v30 <= v8 )
    {
      *a1 = v30;
      return v35 - __readfsqword(0x28u);
    }
    v12 = *a1;
  }
  v13 = *a2;
  do
  {
    v19 = *(_DWORD *)(*(_QWORD *)(a3 + 1504) + 80LL);
    if ( v12 % v19 )
      v19 = v12;
    if ( v9 )
    {
      v31 = v13;
      v34 = 0;
      copy_tinfo_t();
      v13 = v31;
    }
    else
    {
      v34 = 0;
    }
    v14 = sub_222970(a3, v13, &v34, v19);
    clear_tinfo_t();
    if ( v12 != -1 )
    {
      v15 = *a2;
      if ( v14 == *a2 )
        goto LABEL_46;
      if ( v12 && v15 >= v14 && v12 + v14 - 1 >= v15 + *a1 - 1 )
      {
        if ( sub_117EC0(v12) )
          goto LABEL_46;
        v15 = *a2;
      }
      if ( v14 >= (__int64)v15 )
        v16 = v12 + v14 - v15;
      else
        v16 = v12 - v14 + v15;
      v17 = *(_QWORD *)(a3 + 1504);
      v18 = 16;
      if ( (*(_BYTE *)(v17 + 50) & 8) == 0 )
        v18 = 2 * *(_DWORD *)(v17 + 80);
      if ( v16 > v18 )
      {
        v23 = 1;
        v24 = v15 & -v33;
        if ( *a1 > 0 )
          v23 = *a1;
        v25 = sub_222E50(a3, v24, nullptr, (int)v15 + v23 - (int)v24);
        *a1 = v25;
        v26 = *a2;
        if ( v25 && v26 >= v24 && v25 + v24 - 1 >= v26 )
        {
          *a2 = v24;
          return v35 - __readfsqword(0x28u);
        }
        if ( !under_debugger )
          sub_37CFE0(52374);
LABEL_61:
        BUG();
      }
      v9 = nullptr;
      v12 = sub_117ED0(v16);
    }
    v13 = *a2;
  }
  while ( *a2 < v14 );
  if ( v12 != -1 )
  {
LABEL_46:
    v28 = sub_222E50(a3, v14, v9, v12);
    if ( v12 < v28 )
      v12 = v28;
  }
  *a1 = v12;
  *a2 = v14;
  return v35 - __readfsqword(0x28u);
}

