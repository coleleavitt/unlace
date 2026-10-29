__int64 __fastcall sub_2AED20(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rbx
  bool (__fastcall ***v5)(__int64); // rdi
  bool (__fastcall *v6)(__int64); // rax
  unsigned __int8 (***v8)(void); // rdi
  unsigned __int8 (*v9)(void); // rax
  unsigned __int8 (***v10)(void); // rdi
  unsigned __int8 (*v11)(void); // rax

  v4 = a2;
  if ( a3 != 1 )
  {
    if ( a3 == 2 )
    {
      if ( a2 > *(_QWORD *)(a1 + 48) )
        v4 = *(_QWORD *)(a1 + 48);
      --v4;
      while ( v4 != -1 )
      {
        v8 = (unsigned __int8 (***)(void))(*(_QWORD *)(a1 + 40) + 88 * v4);
        v9 = **v8;
        if ( (char *)v9 == (char *)sub_2A8DE0 )
        {
          if ( (unsigned int)sub_2533C0((__int64)(v8 + 1), (__int64)(v8 + 8)) )
            return v4;
        }
        else if ( v9() )
        {
          return v4;
        }
        --v4;
      }
      return -1;
    }
    if ( !a3 )
    {
      if ( a2 >= *(_QWORD *)(a1 + 48) )
        goto LABEL_5;
      v10 = (unsigned __int8 (***)(void))(*(_QWORD *)(a1 + 40) + 88 * a2);
      v11 = **v10;
      if ( (char *)v11 == (char *)sub_2A8DE0 )
      {
        if ( !(unsigned int)sub_2533C0((__int64)(v10 + 1), (__int64)(v10 + 8)) )
          goto LABEL_6;
      }
      else if ( !v11() )
      {
LABEL_6:
        while ( ++v4 < *(_QWORD *)(a1 + 48) )
        {
          while ( 1 )
          {
            v5 = (bool (__fastcall ***)(__int64))(*(_QWORD *)(a1 + 40) + 88 * v4);
            v6 = **v5;
            if ( v6 == sub_2A8DE0 )
              break;
            if ( ((unsigned __int8 (*)(void))v6)() )
              return v4;
            if ( ++v4 >= *(_QWORD *)(a1 + 48) )
              return -1;
          }
          if ( (unsigned int)sub_2533C0((__int64)(v5 + 1), (__int64)(v5 + 8)) )
            return v4;
        }
        return -1;
      }
    }
    return v4;
  }
LABEL_5:
  if ( a2 != -1 )
    goto LABEL_6;
  return -1;
}

