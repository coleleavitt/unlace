__int64 __fastcall sub_3AF20(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  _BYTE *v6; // rax
  __int64 v8; // rax
  __int64 v9; // [rsp+0h] [rbp-68h] BYREF
  __int64 v10; // [rsp+8h] [rbp-60h]
  __int128 v11; // [rsp+10h] [rbp-58h]
  __int64 v12; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  __int64 v15; // [rsp+38h] [rbp-30h]
  int v16; // [rsp+40h] [rbp-28h]
  unsigned __int64 v17; // [rsp+48h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  switch ( a3 )
  {
    case 'F':
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v9 = a5;
      v10 = 0;
      v12 = 0;
      v13 = -1;
      v14 = node2ea();
      v15 = -1;
      v16 = 0;
      v11 = 0;
      if ( (unsigned __int8)sub_6FFD0(&v9) )
        sub_39C30((__int64 *)a1);
      if ( v10 )
      {
        *(_QWORD *)&v11 = 0;
        qfree();
      }
      break;
    case 'V':
    case 'W':
      sub_39AB0(a1, a5, a4, a3);
      break;
    case 'b':
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v8 = node2ea();
      if ( (unsigned __int8)sub_6B420(a5, &v9, v8) )
        sub_30660((__int64 *)a1);
      break;
    case 'f':
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      node2ea();
      if ( get_func() && get_ea_name() <= 0 )
        goto LABEL_9;
      break;
    case 's':
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      node2ea();
      if ( get_func() && get_ea_name() <= 0 )
LABEL_9:
        sub_30660((__int64 *)a1);
      break;
    default:
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v6 = (_BYTE *)qvector_reserve();
      *(_QWORD *)a1 = v6;
      *(_QWORD *)(a1 + 8) = 1;
      *v6 = 0;
      break;
  }
  return a1;
}
