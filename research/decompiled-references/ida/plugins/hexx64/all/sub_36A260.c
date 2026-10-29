__int64 __fastcall sub_36A260(__int64 a1, __int64 a2, double a3)
{
  int v3; // ebp
  unsigned int v5; // r15d
  __int64 i; // r12
  int v7; // ecx
  __int64 v8; // rdi
  __int64 v9; // rbx
  int v10; // eax
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v15; // rax

  v3 = *(_DWORD *)(a2 + 8) - 1;
  if ( v3 >= 0 )
  {
    v5 = 0;
    for ( i = 96LL * (unsigned int)v3; ; i -= 96 )
    {
      v9 = i + *(_QWORD *)a2;
      if ( *(_QWORD *)(v9 + 16) != *(_QWORD *)(a1 + 8) )
        goto LABEL_10;
      v10 = *(_DWORD *)v9;
      if ( *(_DWORD *)v9 == 1 )
      {
        if ( *(_QWORD *)(a1 + 24) > *(_QWORD *)(v9 + 8) - *(_QWORD *)(a2 + 40) )
          goto LABEL_10;
        if ( *(_QWORD *)(v9 + 64) > 1u )
        {
LABEL_6:
          v8 = *(_QWORD *)(v9 + 24);
          *(_DWORD *)(v9 + 88) = 0;
          if ( v8 )
          {
            *(_QWORD *)(v9 + 32) = 0;
            qfree(v8);
            *(_QWORD *)(v9 + 24) = 0;
            *(_QWORD *)(v9 + 40) = 0;
          }
          clear_tinfo_t();
          goto LABEL_9;
        }
      }
      else
      {
        v7 = *(_QWORD *)(v9 + 80);
        if ( v7 == -1 )
        {
          v7 = 2;
          if ( v10 != 4 )
          {
            v7 = 1;
            if ( v10 == 2 )
            {
              v15 = **(_QWORD **)(v9 + 8) + 24LL * *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8LL) - 24;
              v7 = *(unsigned __int16 *)(v15 + 18) + *(unsigned __int16 *)(v15 + 16);
            }
          }
        }
        if ( (unsigned int)sub_369CC0(*(_QWORD **)(a1 + 16), (int *)(i + *(_QWORD *)a2), v7, a3) == -1 )
          goto LABEL_10;
        if ( *(_QWORD *)(v9 + 64) > 1u )
          goto LABEL_6;
      }
      v11 = (_QWORD *)(i + *(_QWORD *)a2);
      v12 = v11[7];
      if ( v12 )
      {
        v11[8] = 0;
        qfree(v12);
      }
      clear_tinfo_t();
      v13 = v11[3];
      if ( v13 )
      {
        v11[4] = 0;
        qfree(v13);
      }
      cleanup_argloc();
      memmove(v11, v11 + 12, *(_QWORD *)a2 + 96LL * *(_QWORD *)(a2 + 8) - (_QWORD)v11 - 96);
      --*(_QWORD *)(a2 + 8);
LABEL_9:
      v5 = 1;
LABEL_10:
      if ( --v3 == -1 )
        return v5;
    }
  }
  return 0;
}

