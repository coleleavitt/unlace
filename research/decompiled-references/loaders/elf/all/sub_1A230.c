__int64 __fastcall sub_1A230(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 dword; // rax
  __int64 v18; // [rsp+8h] [rbp-40h] BYREF
  __int64 v19[7]; // [rsp+10h] [rbp-38h] BYREF

  v9 = *(_QWORD *)(a1 + 16);
  v19[1] = __readfsqword(0x28u);
  v18 = 0;
  v19[0] = 0;
  sub_18DE0(v9, &v18, v19, a5);
  if ( !v19[0] || !v18 )
    return 0;
  v11 = *(_QWORD *)(v18 + 16);
  v12 = *(_QWORD *)(v19[0] + 16);
  v13 = a3 - v11;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL);
  if ( a2 )
  {
    v15 = v14 & (v12 + (int)(16 * ((unsigned __int64)(v13 - 24) >> 3)));
    dword = (unsigned int)get_dword(v15 + 2, v13, v12, v11, v10) + v15 + 6;
  }
  else
  {
    v15 = v14 & (v12 + (int)(16 * ((unsigned __int64)(v13 - 12) >> 2)));
    dword = (unsigned int)get_dword(v15 + 2, v13, v12, v11, v10);
  }
  if ( a3 != (*(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL) & dword) )
    return 0;
  sub_40E60(a1, v15, a4, ".", "");
  return 1;
}
