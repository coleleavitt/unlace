__int64 __fastcall sub_1552F0(__int64 a1, __int64 a2, double a3)
{
  char v3; // al
  __int64 result; // rax
  __int64 v5; // r12
  int v6; // r13d
  __int64 v7; // r14
  __int64 v8; // rax
  int data_elsize; // r15d
  __int64 v10; // r14
  int v11; // r13d
  __int16 v12; // r12
  _BYTE v13[24]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v3 = *(_BYTE *)a1;
  v14 = __readfsqword(0x28u);
  if ( v3 == 6 )
  {
    if ( (unsigned __int8)is_mapped() )
    {
      v5 = *(_QWORD *)(a2 + 96);
      v6 = *(_DWORD *)(a1 + 4);
      v7 = *(_QWORD *)(v5 + 8);
      if ( (unsigned __int8)getinf() )
        LODWORD(v8) = (unsigned __int8)getinf();
      else
        v8 = *(_QWORD *)(v7 + 120);
      data_elsize = v8;
      v10 = v6;
      if ( v6 == (_DWORD)v8 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v5 + 8) + 120LL) != v6 )
        {
          if ( (get_flags_ex() & 0x600) == 0x200 )
            prev_not_tail();
          get_item_flag();
          data_elsize = get_data_elsize();
          v10 = data_elsize;
          if ( (unsigned int)(data_elsize - 8) > 8 )
            return 0;
        }
      }
      else
      {
        data_elsize = v6;
      }
      if ( (unsigned int)sub_343460(v5, *(_QWORD *)(a1 + 8), v10) )
      {
        if ( data_elsize == get_bytes() )
        {
          v11 = *(_DWORD *)(a1 + 4);
          v12 = *(_WORD *)(a1 + 2);
          result = sub_11D360(a1, a2, v13, v10, a3);
          if ( (_BYTE)result )
          {
            *(_DWORD *)(a1 + 4) = v11;
            *(_WORD *)(a1 + 2) = v12;
            return result;
          }
        }
      }
    }
    v3 = *(_BYTE *)a1;
  }
  if ( v3 != 2 )
    return 0;
  return sub_11D360(a1, a2, (_BYTE *)(*(_QWORD *)(a1 + 8) + 16LL), -(__int64)*(int *)(a1 + 4), a3);
}

