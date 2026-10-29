__int64 __fastcall sub_2B000(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rsi
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx

  result = qword_9AD30 + 144LL * *(int *)(a1 + 1176);
  if ( *(_DWORD *)(result + 120) == 13 )
  {
    result = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
    if ( (_DWORD)result == 5 )
    {
      v4 = *(_QWORD *)(a2 + 24);
      if ( v4 != -1 )
      {
        result = *(_QWORD *)(a1 + 1648);
        if ( result )
        {
          v5 = a1 + 1640;
          do
          {
            while ( 1 )
            {
              v6 = *(_QWORD *)(result + 16);
              v7 = *(_QWORD *)(result + 24);
              if ( *(_QWORD *)(result + 32) >= v4 )
                break;
              result = *(_QWORD *)(result + 24);
              if ( !v7 )
                goto LABEL_9;
            }
            v5 = result;
            result = *(_QWORD *)(result + 16);
          }
          while ( v6 );
LABEL_9:
          if ( v5 != a1 + 1640 )
          {
            v8 = *(_QWORD *)(v5 + 32);
            if ( v4 >= v8 )
            {
              result = (unsigned int)(*(_DWORD *)(v5 + 64) - 2);
              if ( (unsigned int)result <= 2 )
              {
                result = *(_QWORD *)(*(_QWORD *)a1 + 848LL);
                if ( (void (*)())result != nullsub_26 )
                  return ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64))result)(
                           a1,
                           a2,
                           v8,
                           v5 + 40);
              }
            }
          }
        }
      }
    }
    else
    {
      if ( under_debugger )
        BUG();
      interr();
      if ( (void (*)())*MEMORY[0xB07000000000000] != nullsub_8 )
        ((void (__fastcall *)(__int64, __int64))*MEMORY[0xB07000000000000])(
          0xB07000000000000LL,
          MEMORY[0xB07000000000028] + a2);
      return 0;
    }
  }
  return result;
}

