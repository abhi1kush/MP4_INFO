#ifndef __BOXES_H__
#define __BOXES_H__

typedef enum
{
	ftyp = 0,
	pdin, 
	moov, //container
	mvhd,
	trak, //container
	tkhd,
	tref,
	edts, //container
	elst,
	mdia, //container
	mdhd,
	hdlr,
	minf, //container
	vmhd,
	smhd,
	hmhd,
	nmhd,
	dinf, //container
	dref,
	stbl, //container
	stsd,
	stts,
	ctts,
	stsz,
	stz2,
	stco,
	co64,
	stss,
	stsh,
	padb,
	stdp,
	sbgp,
	sgpd,
	subs,
	mvex, //container
	mehd,
	trex,
	ipmc,
	moof, //container
	mfhd,
	traf, //container
	tfhd,
	trun,
	sdtp,
	sdgp,
	subs,
	mfra, //container
	tfra,
	mfro,
	mdat,
	free,
	skip, //container
	udta, //container
	cprt,
	meta, //container
	hdlr,
        ipmc,
	iloc,
	ipro, //container
	sinf, //container
	frma,
	imif,
	schm,
	schi,
	iinf,
	xml,
	bxml,
	pitm,	
	box_enum_t_max,
}BOX_ENUM_T;

typedef struct BOX_S
{
	BOX_ENUM_T box_key;
	char name[5];
	uint8_t isContainer;
}BOX_T;

#define BOX_INIT(x, y) { .box_key = x, .name = #x, .isContainer = y}
BOX_T BOXES[] = {
	BOX_INIT(ftyp, 0),
        BOX_INIT(pdin, 0), 
        BOX_INIT(moov, 1), //container
        BOX_INIT(mvhd, 0),             
        BOX_INIT(trak, 1), //container
        BOX_INIT(tkhd, 0),             
        BOX_INIT(tref, 0),             
        BOX_INIT(edts, 1), //container
        BOX_INIT(elst, 0),             
        BOX_INIT(mdia, 1), //container
        BOX_INIT(mdhd, 0),             
        BOX_INIT(hdlr, 0),             
        BOX_INIT(minf, 1), //container
        BOX_INIT(vmhd, 0),             
        BOX_INIT(smhd, 0),             
        BOX_INIT(hmhd, 0),             
        BOX_INIT(nmhd, 0),             
        BOX_INIT(dinf, 1), //container
        BOX_INIT(dref, 0),             
        BOX_INIT(stbl, 1), //container
        BOX_INIT(stsd, 0),             
        BOX_INIT(stts, 0),             
        BOX_INIT(ctts, 0),             
        BOX_INIT(stsz, 0),             
        BOX_INIT(stz2, 0),             
        BOX_INIT(stco, 0),             
        BOX_INIT(co64, 0),             
        BOX_INIT(stss, 0),             
        BOX_INIT(stsh, 0),             
        BOX_INIT(padb, 0),             
        BOX_INIT(stdp, 0),             
        BOX_INIT(sbgp, 0),             
        BOX_INIT(sgpd, 0),             
        BOX_INIT(subs, 0),             
        BOX_INIT(mvex, 1), //container
        BOX_INIT(mehd, 0),             
        BOX_INIT(trex, 0),             
        BOX_INIT(ipmc, 0),             
        BOX_INIT(moof, 1), //container
        BOX_INIT(mfhd, 0),             
        BOX_INIT(traf, 1), //container
        BOX_INIT(tfhd, 0),             
        BOX_INIT(trun, 0),             
        BOX_INIT(sdtp, 0),             
        BOX_INIT(sdgp, 0),             
        BOX_INIT(subs, 0),             
        BOX_INIT(mfra, 1), //container
        BOX_INIT(tfra, 0),             
        BOX_INIT(mfro, 0),             
        BOX_INIT(mdat, 0),             
        BOX_INIT(free, 0),             
        BOX_INIT(skip, 1), //container
        BOX_INIT(udta, 1), //container
        BOX_INIT(cprt, 0),             
        BOX_INIT(meta, 1), //container
        BOX_INIT(hdlr, 0),             
        BOX_INIT(ipmc, 0),             
        BOX_INIT(iloc, 0),             
        BOX_INIT(ipro, 1), //container
        BOX_INIT(sinf, 1), //container
        BOX_INIT(frma, 0),
        BOX_INIT(imif, 0),
        BOX_INIT(schm, 0),
        BOX_INIT(schi, 0),
        BOX_INIT(iinf, 0),
        BOX_INIT(xml,, 0),
        BOX_INIT(bxml, 0),
        BOX_INIT(pitm, 0) 	
};

typedef enum 
{
	MP4_ERR_OK = 0,
	MP4_FAILED = -1,
	MP4_INVALID_PARAM =-2,
	MP4_INVALID_VALUE =-3,
	ERR_T_MAX =-4
}ERR_T;

#endif /*__BOXES_H__*/
