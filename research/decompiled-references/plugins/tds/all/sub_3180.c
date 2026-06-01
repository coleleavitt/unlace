__int64 __fastcall sub_3180(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // eax
  unsigned int v7; // ebp
  __int64 v9; // rdi
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]
  __int64 v12; // [rsp+10h] [rbp-18h]
  __int64 v13; // [rsp+18h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  show_auto(a2, 0);
  v6 = callui(27, 0, &callui, v3, v4, v5, v10, v11, v12, v13);
  if ( (_BYTE)v6 && (v7 = v6, (int)sub_2FB0(0, (__int64)"HIDECANCEL\nAbort TDS loading?") > 0) )
  {
    v9 = *(_QWORD *)(a1 + 152);
    v10 = 2;
    netnode_supset(v9, -5, &v10, 8, 65);
    *(_BYTE *)(a1 + 164) = 1;
  }
  else
  {
    return *(unsigned __int8 *)(a1 + 164);
  }
  return v7;
}
