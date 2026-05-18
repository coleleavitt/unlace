__int64 __fastcall sub_116270(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r12
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 i; // rax
  unsigned int v10; // [rsp+Ch] [rbp-2Ch]

  v4 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 17) )
    sub_CC740(a1);
  a2 = (unsigned int)a2;
  result = sub_115FA0(*(_QWORD *)(v4 + 16), (unsigned int)a2, 0);
  if ( !(_DWORD)result )
  {
    if ( *(_BYTE *)(a1 + 19) )
    {
      v7 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(a1 + 19) = 0;
      for ( i = *(_QWORD *)(v7 + 16); i; i = *(_QWORD *)(i + 40) )
      {
        if ( (*(_BYTE *)(i + 1) & 0x10) != 0 )
        {
          *(_BYTE *)(a1 + 19) = 1;
          if ( (_DWORD)a2 == *(_DWORD *)(i + 80) )
            *(_BYTE *)i = 1;
        }
      }
    }
    a2 = (unsigned int)a2;
    result = sub_115710(v4, (unsigned int)a2, 0, a3);
  }
  if ( *(_BYTE *)(a1 + 17) )
  {
    if ( (*(_DWORD *)(a1 + 20))-- == 1 )
    {
      v10 = result;
      sub_CC7D0(a1, a2, v6);
      return v10;
    }
  }
  return result;
}
