__int64 __fastcall sub_357D0(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r12d
  __int64 v4; // rax
  int auto_state; // r13d
  __int64 result; // rax
  __int64 v7; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v8[11]; // [rsp+10h] [rbp-58h] BYREF

  v8[3] = __readfsqword(0x28u);
  v2 = sub_4E2D0(a1);
  if ( v2 == 4 )
  {
LABEL_13:
    v3 = 2;
    goto LABEL_4;
  }
  if ( v2 > 4 )
  {
    if ( v2 - 8 > 1 )
      return -1;
    goto LABEL_13;
  }
  v3 = 30;
  if ( v2 != 3 )
    return -1;
LABEL_4:
  v4 = netnode_altval(*(_QWORD *)(a1 + 120), a2, 839);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 && (unsigned __int64)(int)v4 >= 0xFFFFFFFFFFFFFFFDLL )
    v4 = (int)v4;
  v7 = v4;
  auto_state = get_auto_state();
  result = v7;
  if ( v7 == -3 && auto_state )
  {
    v7 = -1;
  }
  else if ( v7 != -1 )
  {
    goto LABEL_10;
  }
  if ( (unsigned __int8)xrefblk_t_first_to(v8, a2, 5) )
  {
    while ( !(unsigned __int8)sub_5B600(a1, &v7, v8[0], v3, 0xFFFFFFFFLL) && (unsigned __int8)xrefblk_t_next_to(v8) )
      ;
  }
  if ( v7 == -1 )
    v7 = -3 - ((auto_state == 0) - 1LL);
  sub_4F800(a1, a2);
  result = v7;
LABEL_10:
  if ( (unsigned __int64)(result + 3) <= 1 )
    return -1;
  return result;
}

