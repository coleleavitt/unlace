__int64 __fastcall sub_52990(__int64 a1, __m128i *a2)
{
  int v2; // eax
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r12
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  _QWORD v16[11]; // [rsp+0h] [rbp-58h] BYREF

  v16[5] = __readfsqword(0x28u);
  v2 = sub_97BF0(a2);
  if ( (unsigned __int16)v2 <= 2u )
  {
    if ( !(_WORD)v2 )
      return 0;
  }
  else
  {
    v3 = (unsigned int)(v2 - 4);
    if ( (unsigned __int16)v3 > 0x3Eu )
      return 0;
    v4 = 0x428A0005000ED801LL;
    if ( !_bittest64(&v4, v3) )
      return 0;
  }
  sub_4E7A0((__int64)v16, **(_QWORD ***)(a1 + 24), *(__int64 **)(a1 + 24), a2, 0);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(v5 + 32);
  if ( (int)v6 > 0 )
  {
    sub_60EF0(v5 + 24, **(_QWORD **)(v5 + 24), *(_QWORD *)v5);
    v8 = (int)v6 - 1;
    v9 = (unsigned int)(v6 - 1);
    v10 = 8 * v8;
    v11 = 8 * (v8 - v9);
    do
    {
      sub_56050(v5 + 24, *(_QWORD *)(*(_QWORD *)(v5 + 24) + v10));
      v15 = v10;
      v10 -= 8;
    }
    while ( v15 != v11 );
    if ( unk_CC8D0 )
      sub_66090(*(_QWORD *)(a1 + 24) + 24, **(_QWORD **)(a1 + 24), (unsigned int)"after_toplevel_save", v12, v13, v14);
    sub_58F00(v5 + 24);
  }
  return 0;
}

