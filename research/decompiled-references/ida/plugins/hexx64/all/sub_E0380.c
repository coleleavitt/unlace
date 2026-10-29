__int64 __fastcall sub_E0380(__int64 *a1)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r12
  unsigned __int64 i; // rbx
  unsigned __int64 *v7; // rdx
  __int64 v8; // rax
  char v9; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v10; // [rsp+168h] [rbp-30h] BYREF

  v1 = a1[38];
  v10 = __readfsqword(0x28u);
  v2 = sub_330F80((_QWORD *)a1[1], v1);
  v3 = sub_D7430(*a1, v2);
  if ( !v3 )
    return 0;
  v4 = v3;
  if ( a1[40] != -1 )
  {
    for ( i = get_first_fcref_to(); i != -1; i = get_next_fcref_to() )
    {
      if ( v2 != i )
      {
        if ( (unsigned __int8)sub_332920(a1[1] + 8, i) )
        {
          v7 = (unsigned __int64 *)&v9;
          do
          {
            *(_WORD *)v7 = 0;
            v7 += 5;
            *((_WORD *)v7 - 19) = 0;
            *((_WORD *)v7 - 18) = 0;
            *((_DWORD *)v7 - 2) = 0;
            *((_WORD *)v7 - 17) = 0;
            *((_OWORD *)v7 - 2) = 0;
            *(v7 - 2) = 0;
          }
          while ( &v10 != v7 );
          if ( (unsigned int)decode_insn() )
          {
            if ( (unsigned __int8)is_call_insn() )
            {
              v8 = sub_D73B0((_QWORD *)a1[1]);
              if ( v8 < v4 )
              {
                if ( !v8 )
                  return 0;
                v4 = v8;
              }
            }
          }
        }
      }
    }
  }
  return v4;
}

