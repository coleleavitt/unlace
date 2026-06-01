__int64 __fastcall sub_3C360(__int64 a1, __int64 *a2, unsigned __int8 a3, __int64 a4, int *a5, __int64 a6)
{
  __int64 *v10; // rdi
  _QWORD *func; // rax
  __int64 v13; // rbx
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v22; // [rsp+10h] [rbp-4E8h] BYREF
  __int64 v23; // [rsp+18h] [rbp-4E0h] BYREF
  __int64 v24; // [rsp+20h] [rbp-4D8h] BYREF
  __int64 v25; // [rsp+28h] [rbp-4D0h]
  __int128 v26; // [rsp+30h] [rbp-4C8h]
  __int64 v27; // [rsp+40h] [rbp-4B8h]
  __int64 v28; // [rsp+48h] [rbp-4B0h]
  __int64 v29; // [rsp+50h] [rbp-4A8h]
  __int128 v30; // [rsp+58h] [rbp-4A0h]
  __int64 v31; // [rsp+68h] [rbp-490h]
  __int128 v32; // [rsp+70h] [rbp-488h]
  __int64 v33; // [rsp+80h] [rbp-478h]
  __int64 v34; // [rsp+88h] [rbp-470h]
  __int128 v35; // [rsp+90h] [rbp-468h]
  __int64 v36; // [rsp+A0h] [rbp-458h]
  int v37; // [rsp+A8h] [rbp-450h]
  __int64 v38[137]; // [rsp+B0h] [rbp-448h] BYREF

  v38[129] = __readfsqword(0x28u);
  switch ( a3 )
  {
    case 'A':
      node2ea();
      if ( !(unsigned __int8)is_mapped() || a6 != 4 )
        goto LABEL_27;
      v24 = netnode_altval();
      netnode_supset();
      return 1;
    case 'F':
      v19 = node2ea();
      v24 = a1;
      v25 = 0;
      v27 = 0;
      LODWORD(v28) = -1;
      v29 = v19;
      *(_QWORD *)&v30 = -1;
      DWORD2(v30) = 0;
      v26 = 0;
      if ( !(unsigned __int8)sub_70FD0(&v24) )
      {
        sub_31660(a2);
        if ( v25 )
        {
          *(_QWORD *)&v26 = 0;
          qfree();
        }
        return 0;
      }
      sub_70D80(&v24, a5);
      if ( v25 )
      {
LABEL_24:
        *(_QWORD *)&v26 = 0;
        qfree();
      }
      return 1;
    case 'P':
    case 'p':
      if ( a6 != 1 )
      {
        v10 = a2;
        goto LABEL_4;
      }
      netnode_supset();
      return 1;
    case 'V':
    case 'W':
      if ( !(unsigned __int8)sub_625A0(a1, v38, a4, a3) )
      {
        sub_31660(a2);
        return 0;
      }
      sub_62760(a1, a4, a3, v38);
      return 1;
    case 'b':
      v20 = node2ea();
      if ( !(unsigned __int8)sub_6C420(a1, &v24, v20) )
      {
        sub_31660(a2);
        return 0;
      }
      sub_6C570(a1, v20, &v24, 1);
      return 1;
    case 'f':
      node2ea();
      func = (_QWORD *)get_func();
      v13 = (__int64)func;
      if ( func )
      {
        if ( (unsigned __int8)sub_25160(a1, func, &v22, &v23, &v24, v38) )
        {
          sub_25060(a1, v13, v22, v23, v24, v38);
          return 1;
        }
        sub_31660(a2);
      }
      else
      {
LABEL_27:
        sub_31660(a2);
      }
      return 0;
    case 'h':
    case 'r':
      if ( a6 == 4 )
      {
        v24 = *a5;
        netnode_supset();
        return 1;
      }
      else
      {
        v10 = a2;
LABEL_4:
        sub_31660(v10);
        return 0;
      }
    case 's':
      v14 = node2ea();
      v24 = 192;
      v25 = 0;
      v27 = -1;
      v28 = 0;
      v29 = 0;
      v31 = 0;
      v33 = 0;
      v34 = -1;
      v36 = 0;
      v37 = 144;
      v26 = 0;
      v30 = 0;
      v32 = 0;
      v35 = 0;
      sub_30C00(&v24, a1, v14);
      sub_25500((__int64)&v24, a1, v14);
      v15 = v31;
      if ( v31 )
      {
        v16 = v32;
        if ( (_QWORD)v32 )
        {
          v17 = 0;
          do
          {
            v18 = (_QWORD *)(v15 + 24 * v17);
            if ( *v18 )
            {
              v18[1] = 0;
              qfree();
              v15 = v31;
            }
            ++v17;
          }
          while ( v16 != v17 );
        }
        *(_QWORD *)&v32 = 0;
        qfree();
      }
      if ( v29 )
      {
        *(_QWORD *)&v30 = 0;
        qfree();
      }
      if ( v25 )
        goto LABEL_24;
      return 1;
    default:
      return 0;
  }
}

