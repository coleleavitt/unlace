__int64 __fastcall sub_CC650(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 i; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdi

  result = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(result + 88) )
    goto LABEL_17;
  if ( !((unsigned int (*)(void))*(&xmmword_241500 + 1))() )
  {
    result = *(_QWORD *)(a1 + 8);
LABEL_17:
    *(_QWORD *)(result + 8) = *(_QWORD *)a1;
    *(_BYTE *)(a1 + 18) = 1;
    return result;
  }
  for ( i = *(_QWORD *)(a1 + 32); i; i = *(_QWORD *)(i + 32) )
  {
    if ( *(_BYTE *)(i + 18) )
      sub_CC630(*(_QWORD *)(i + 8), (_BYTE *)(i + 18), v3);
  }
  result = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(result + 88);
  if ( v5 )
  {
    xmmword_241500(v5);
    result = *(_QWORD *)(a1 + 8);
  }
  *(_QWORD *)(result + 8) = *(_QWORD *)a1;
  v6 = *(_QWORD *)(a1 + 32);
  for ( *(_BYTE *)(a1 + 18) = 1; v6; v6 = *(_QWORD *)(v6 + 32) )
  {
    result = *(unsigned int *)(v6 + 20);
    if ( (_DWORD)result )
    {
      result = *(_QWORD *)(v6 + 8);
      v7 = *(_QWORD *)(result + 88);
      if ( v7 )
      {
        xmmword_241500(v7);
        result = *(_QWORD *)(v6 + 8);
      }
      *(_QWORD *)(result + 8) = *(_QWORD *)v6;
      *(_BYTE *)(v6 + 18) = 1;
    }
  }
  return result;
}
