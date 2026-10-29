unsigned __int64 __fastcall sub_4E940(__int64 a1)
{
  __int64 v1; // rax
  __int64 *v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rsi
  char v6; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v1 = sub_1DD10();
  v2 = *(__int64 **)(a1 + 16);
  if ( v2 )
  {
    v3 = v1;
    do
    {
      v4 = v2[1];
      v6 = *((_BYTE *)v2 + 16);
      netnode_supset(v3, v4, &v6, 1, 355);
      v2 = (__int64 *)*v2;
    }
    while ( v2 );
  }
  return v7 - __readfsqword(0x28u);
}

