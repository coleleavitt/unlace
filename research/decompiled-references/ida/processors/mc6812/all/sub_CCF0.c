__int64 __fastcall sub_CCF0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  size_t v8; // r12
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rax
  _QWORD v12[25]; // [rsp+0h] [rbp-C8h] BYREF

  v12[17] = __readfsqword(0x28u);
  if ( a4 != 3 )
    return 0;
  if ( a2 )
  {
    if ( (get_flags_ex() & 0x600) == 0x200 )
      prev_not_tail();
    get_flags_ex();
    switch ( a1 )
    {
      case 0LL:
      case 1LL:
      case 2LL:
      case 3LL:
      case 4LL:
      case 5LL:
        get_radix();
        v6 = numop2str();
        v7 = a2[1];
        v8 = v6;
        v9 = v6;
        if ( v7 )
        {
          --v7;
          v9 = v6 + v7;
        }
        v10 = *a2;
        if ( a2[2] < (unsigned __int64)(v9 + 1) )
        {
          v11 = qvector_reserve();
          *a2 = v11;
          v10 = v11;
        }
        a2[1] = v9 + 1;
        *(_BYTE *)(v10 + v9) = 0;
        memmove((void *)(v7 + *a2), v12, v8);
        break;
      default:
        if ( !under_debugger )
          interr();
        BUG();
    }
  }
  return 1;
}

