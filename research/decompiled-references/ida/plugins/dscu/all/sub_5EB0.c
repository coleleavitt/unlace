__int64 __fastcall sub_5EB0(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 24);
  v8[1] = __readfsqword(0x28u);
  switch ( v1 )
  {
    case 2:
      v7 = *(_QWORD *)(a1 + 16);
      v8[0] = *(_QWORD *)(a1 + 32);
      netnode_supset(*(_QWORD *)(v7 + 104), 3, v8, 8, 65);
      break;
    case 4:
      v5 = *(_QWORD *)(a1 + 16);
      v6 = *(int *)(a1 + 40);
      v8[0] = 1;
      netnode_supset(*(_QWORD *)(v5 + 104), v6, v8, 8, 103);
      break;
    case 1:
      v2 = *(_QWORD *)(a1 + 16);
      v3 = *(int *)(a1 + 40);
      v8[0] = 1;
      netnode_supset(*(_QWORD *)(v2 + 104), v3, v8, 8, 116);
      break;
    default:
      if ( !under_debugger )
        interr(30608);
      BUG();
  }
  return (***(unsigned __int8 (__fastcall ****)(_QWORD, _QWORD))(a1 + 16))(
           *(_QWORD *)(a1 + 16),
           *(unsigned int *)(a1 + 24));
}

