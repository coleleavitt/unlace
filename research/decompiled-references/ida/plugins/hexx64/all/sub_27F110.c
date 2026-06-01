__int64 __fastcall sub_27F110(__int64 a1, __int64 a2, __int64 a3, char a4, double a5)
{
  _QWORD *v5; // rax
  __int64 v6; // rbx
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // [rsp+8h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 8) != 71 || *(_DWORD *)(a2 + 8) != 71 )
  {
    if ( !under_debugger )
      sub_383060(0xC868u, a5);
    BUG();
  }
  if ( (a4
     || (v8 = *(__int64 **)(a2 + 24), v8[2] != 1)
     || (v9 = *v8, *(_DWORD *)(v9 + 24) != 72)
     || (v10 = *(_QWORD *)(v9 + 40), *(_DWORD *)(v10 + 8) != 2)
     || (v13 = a3, v11 = sub_259AA0(*(_QWORD *)(v10 + 24), *(_QWORD *)(a3 + 24), a5), a3 = v13, v11))
    && (v5 = *(_QWORD **)(a1 + 24), v5[2] == 1)
    && (v6 = *v5, *(_DWORD *)(*v5 + 24LL) == 72)
    && (v12 = *(_QWORD *)(v6 + 40), *(_DWORD *)(v12 + 8) == 2)
    && !sub_259AA0(*(_QWORD *)(v12 + 24), *(_QWORD *)(a3 + 24), a5) )
  {
    return v6 + 16;
  }
  else
  {
    return 0;
  }
}

