__int64 __fastcall sub_CFA00(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  _DWORD *v8; // rax
  __int64 v9; // rcx

  v4 = sub_1C0090(a2, a3);
  if ( (_BYTE)v4 )
  {
    v5 = v4;
    if ( *(_DWORD *)a2 == 2 )
    {
      v7 = *(_QWORD *)(a2 + 8);
      v8 = *(_DWORD **)v7;
      v9 = *(_QWORD *)v7 + 24LL * *(_QWORD *)(v7 + 8);
      if ( *(_QWORD *)v7 == v9 )
        goto LABEL_4;
      while ( (unsigned int)(*v8 - 3) > 1 )
      {
        v8 += 6;
        if ( (_DWORD *)v9 == v8 )
          goto LABEL_4;
      }
    }
    else if ( (unsigned int)(*(_DWORD *)a2 - 3) > 1 )
    {
LABEL_4:
      ++*(_DWORD *)(a1 + 280);
      return v5;
    }
    if ( !(unsigned int)sub_CF5C0(a1 + 136, a1, (_DWORD *)a2, a3, *(_DWORD *)(a1 + 280)) )
      goto LABEL_4;
  }
  return 0;
}

