__int64 __fastcall sub_72D0(__int64 a1, __int64 a2, __int64 a3, _BOOL8 a4)
{
  _QWORD *exception; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // ebp

  v5 = *(_QWORD *)(a1 + 48);
  v6 = v5 + 1;
  LOBYTE(a4) = __CFADD__(v5, 1);
  if ( *(_QWORD *)(a1 + 8) < (unsigned __int64)(v5 + 1) || (a4 = __CFADD__(v5, 1), v5 == -1) )
  {
    if ( !*(_BYTE *)(a1 + 60) )
      sub_5230((__int64)"Too short OMF record", a2, v6, a4);
    exception = __cxa_allocate_exception(8u);
    *exception = &off_13D38;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'omf_probing_failure_t, (void (*)(void *))sub_4420);
  }
  *(_QWORD *)(a1 + 48) = v6;
  result = *(unsigned __int8 *)(*(_QWORD *)a1 + v5);
  switch ( (_BYTE)result )
  {
    case 0x84:
      sub_5890(a1, -1, 2);
      v10 = *(_QWORD *)(a1 + 48);
      v11 = *(unsigned __int16 *)(*(_QWORD *)a1 + v10);
      *(_QWORD *)(a1 + 48) = v10 + 2;
      return v11 | ((unsigned __int8)sub_5EE0(a1, -1) << 16);
    case 0x88:
      sub_5890(a1, -1, 4);
      v9 = *(_QWORD *)(a1 + 48);
      result = *(unsigned int *)(*(_QWORD *)a1 + v9);
      *(_QWORD *)(a1 + 48) = v9 + 4;
      break;
    case 0x81:
      sub_5890(a1, -1, 2);
      v8 = *(_QWORD *)(a1 + 48);
      result = *(unsigned __int16 *)(*(_QWORD *)a1 + v8);
      *(_QWORD *)(a1 + 48) = v8 + 2;
      break;
  }
  return result;
}

