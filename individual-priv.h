#ifndef INDIVIDUAL_PRIV_H
#define INDIVIDUAL_PRIV_H		1
/*
 * individual-priv.h -- Deals with the private side of individuals.
 * $Id: individual-priv.h,v 1.2 2002/05/31 14:35:49 rwx Exp $
 */
/*
 * Copyright (C) 2002 Juan M. Bello Rivas <rwx@synnergy.net>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */


struct individual {
	struct chromosome *chrom;	/* Chromosome string */
	double fitness;			/* Fitness for this individual */
	unsigned int xsite;		/* Crossover site */
};


/* Generates an individual with random genetic material */
extern void individual_random(struct individual *self);

extern int individual_compare(struct individual **lhs, struct individual **rhs);

extern struct individual *individual_dup(struct individual *self);

extern void individual_print(struct individual *self, FILE *fp);


#endif /* !INDIVIDUAL_PRIV_H */
