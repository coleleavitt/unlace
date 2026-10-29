__int64 __fastcall sub_3C9BB0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int *a5)
{
  unsigned int v7; // esi
  __int64 **v8; // rdi
  __int64 v9; // rdi
  __int64 v11; // r12
  __int64 i; // rbp
  __int64 v13; // rax
  char v14; // dl
  unsigned int v15; // eax
  _QWORD *v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rbp
  __int64 module_data; // rax
  unsigned __int64 v20[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  if ( a2 == 4 )
  {
    v15 = *a5;
    if ( (unsigned int)*a5 > 0x2F )
    {
      v16 = *((_QWORD **)a5 + 1);
      *((_QWORD *)a5 + 1) = v16 + 1;
    }
    else
    {
      v16 = (_QWORD *)(*((_QWORD *)a5 + 2) + v15);
      *a5 = v15 + 8;
    }
    if ( *v16 == a1 )
    {
      v17 = *(int *)(*(_QWORD *)(a1 + 8) + 28LL);
      if ( (int)v17 > 0 )
      {
        v18 = 0;
        do
        {
          switch_dbctx();
          module_data = get_module_data();
          *(_DWORD *)(a1 + 4 * v18 + 200) = *(_DWORD *)(module_data + 604);
          *(_BYTE *)(a1 + v18 + 212) = *(_BYTE *)(module_data + 718);
          *(_BYTE *)(a1 + v18++ + 215) = *(_BYTE *)(module_data + 716);
          *(_DWORD *)(module_data + 604) &= ~0x1000u;
          *(_BYTE *)(module_data + 718) = 1;
          *(_BYTE *)(module_data + 716) = 0;
        }
        while ( v17 != v18 );
      }
      v20[0] = (unsigned __int64)&off_4D5DF8;
      v20[1] = a1 + 152;
      create_byfunc_merge_handler();
    }
  }
  else if ( a2 > 4 )
  {
    if ( a2 == 8 )
    {
      v11 = *(int *)(*(_QWORD *)(a1 + 8) + 28LL);
      if ( (int)v11 > 0 )
      {
        for ( i = 0; i != v11; ++i )
        {
          switch_dbctx();
          v13 = get_module_data();
          *(_DWORD *)(v13 + 604) = *(_DWORD *)(a1 + 4 * i + 200);
          *(_BYTE *)(v13 + 718) = *(_BYTE *)(a1 + i + 212);
          v14 = *(_BYTE *)(a1 + i + 215);
          *(_BYTE *)(v13 + 716) = v14;
        }
      }
    }
  }
  else if ( a2 - 2 <= 1 )
  {
    v7 = *a5;
    if ( (unsigned int)*a5 > 0x2F )
    {
      v8 = *((__int64 ***)a5 + 1);
      *((_QWORD *)a5 + 1) = v8 + 1;
    }
    else
    {
      v8 = (__int64 **)(*((_QWORD *)a5 + 2) + v7);
      *a5 = v7 + 8;
    }
    v9 = **v8;
    if ( a2 != 2 )
      return sub_2B24B0(v9);
    v20[0] = v9;
    sub_2B7360(v9);
    sub_1762C0((_QWORD *)(a1 + 152), v20);
  }
  return v21 - __readfsqword(0x28u);
}

